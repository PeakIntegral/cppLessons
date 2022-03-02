// Yura1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Utilities.h"
void createHero(std::string path) 
{
	ifstream file(path, fstream::in);
	std::string name = "";
	int HP = 0;
	int ATK = 0;

	file >> name >> HP >> ATK;
	cout << "\n Name: " << name;
	cout << "\n HP: " << HP;
	cout << "\n ATK: " << ATK;
	file.close();
	}

int main() 
{
	gameScore = 0;
	char* player = new char("asv");
	cout << "Введите имя файла игрока";
	cin >> player;
	createHero(player);
}

