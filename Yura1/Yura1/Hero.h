#pragma once
#include "Utilities.h"

class Hero {
public:
	// поле  = переменная-член
	string name = "";
	int hp = 0;
	int atk = 0;
	int arm = 0;	// 1000 брони = сниж. урона на 75%
	// конструкторы
	Hero(); // конструктор по умолчанию
	Hero(std::string path);
	// метод = функция-член
	void Kick(Hero* enemy);
	void Stats();
	void getDamage(int dmg);

};

Hero* player1;
Hero* player2;
Hero* selectedHero;