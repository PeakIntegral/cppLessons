// Yura1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Utilities.h"
#include "Hero.h"


Hero::Hero() {}

Hero::Hero(std::string path){
ifstream file(path, fstream::in);

	file >> name >> hp >> atk;
	Stats();
	file.close();
}

void Hero::Kick(Hero* enemy) {
	cout << name << " kick " << enemy->name << ": " << atk << "\n";
	enemy->getDamage(atk);
}
void Hero::Stats() {
	cout << "\n Name: " << name;
	cout << "\n HP: " << hp;
	cout << "\n ATK: " << atk << endl;
}

void Hero::getDamage(int dmg) {
	hp -= atk;
	if (hp <= 0) {
		cout << name << " died.";
	}
}

string Menu(string type) {

	string cmd = "";
	if (type == "main") {
		system("cls");
		cout << "\n\n\nВыбор персонажа\n";
		cout << "1)Щербатая АмЭга\n";
		cout << "2)Бончмэн\n";
		cin >> cmd;
		if (cmd == "1") {
			selectedHero = player1;
		}
		else if (cmd == "2") {
			selectedHero = player2;
		}
		return "action";
	}
	else
		if (type == "action") {
			cout << "\n\n\nВыбор действия\n";
			cout << "1)Характеристики текущего персонажа\n";
			cout << "2)Ударить другого персонажа\n";
			cout << "х)В главное меню\n";
			cin >> cmd;
			if (cmd == "1") {
				selectedHero->Stats();
			}
			else if (cmd == "2") {
				auto enemy = selectedHero == player1 ? player2 : player1; //Тернарный оператор
				selectedHero->Kick(enemy);
			}
			
			if (cmd == "x") {
				return "main";
			}
			else {
				return "action";
			}
		}
}

int main()
{

	setlocale(LC_ALL, "Russian");
	gameScore = 0;
	player1 = new Hero("player1.txt");
	player2 = new Hero("player2.txt");
	string nextMenu = Menu("main");
	while (nextMenu != "exit") {
		nextMenu= Menu(nextMenu);
	}
	
	system("pause");
}

