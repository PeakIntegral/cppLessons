
#include "utilities.h"

// ФОРМАТ СОЗДАНИЯ ФУНКЦИЙ
// ТИП_ОТВЕТА  НАЗВАНИЕ(ВХОДНЫЕ ДАННЫЕ) { ДЕЙСТВИЯ }



class Hero {
public:
    // Поля  = Переменная-член
    string name;
    int hp;
    int attack;

    // Методы = функция-член

    bool isAlive() {
        if (hp > 0) {
            cout << endl << name << " is alive" << endl;
            return true;
        }

        cout << "\n " << name << "is dead!" << endl;
        return false;
    }

    void Kick(Hero enemy) {
        enemy.hp -= 30;
    }

};



Hero createHero(string path) {
    ifstream file(path, fstream::in);

    Hero newPlayer;

    file >> newPlayer.name >> newPlayer.hp >> newPlayer.attack;
    cout << "\n Name: " << newPlayer.name;
    cout << "\n HP: " << newPlayer.hp;
    cout << "\n Attack: " << newPlayer.attack;
    file.close();
    return newPlayer;
}

int main()
{

 /*   Hero player1 = createHero("player1.txt");
    Hero player2 = createHero("player2.txt");

    player1.isAlive();
    player2.isAlive();

    player1.Kick(player2);

    player1.isAlive();
    player2.isAlive();*/

    // переменные копируют значения друг друга, но не знают, что дальше происходит с той ячейкой
    int a = 10;
    int b = a;
    int c = a;
    
    b = 5;  // значение в b поменялось на 5, но в А и С осталось такое же

    // создаются ячейки pa pb pc, которые просто указывают на ячейку "а"
    // &a = 0x0f - адрес ячейки а
    // pa = 0x0f - адрес ячейки а
    //  pa = &a  - записать в pa адрес ячейки а
    // *pa = узнать что внутри "а"  = получить значение в ячейке а
   
    int* pa = &a;
    int* pb = &a;
    int* pc = pa;


    *pb = 7;    // взять ячейку "а" и записать в неё 7.  Соответственно в A, *pa, *pb, *pc станет 7, т.к. они все 
                // ссылаются на одну и ту же ячейку


    cout << endl << "a: " << a;
    cout << endl << "b: " << b;
    cout << endl << "c: " << c;

    cout << endl << "pa: " << pa;
    cout << endl << "pb: " << pb;
    cout << endl << "pc: " << pc;

    cout << endl << "*pa: " << *pa;
    cout << endl << "*pb: " << *pb;
    cout << endl << "*pc: " << *pc;



   
    system("pause");

}




/* 
   +Комментарии
    +0. Создание переменных разных типов. Присваивание
    1. Дебаггер и брейкпоинты
    +2. Изменение по условию  if else
    3. Циклы и счётчики for while  doWhile
    +4. Вывод в консоль (константы, переменные)
    +5. Ввод с клавиатуры
    +6. Конфликт типов (ввод строки в число)
    7. Приведение типов ( float, int, char, string )
    8. Массивы (строка=массив)
    9. Создание массива
    10. Ввод массива чисел

    Меню
    1. Приветствие / инструкция
    2. Ввод команды/номера
    3. Условие - действие

    Функции


*/