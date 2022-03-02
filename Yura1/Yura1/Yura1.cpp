// Yura1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Utilities.h"
void createHero(string path) 
{	
	ifstream file(path, fstream::in);
	string name = "";
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
	createHero("player1.txt");
	createHero("player2.txt");
}

