// Aleksandra.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//ТИП_ОТВЕТА   НАЗВАНИЕ (ВХОДНЫЕ ДАННЫЕ) {ДЕЙСТВИЯ}
 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

void createHero(string path) {
 ifstream file(path, fstream::in);
    string name;
    int hp;
    int attack;

    file >> name >> hp >> attack;
    
    cout << "\n Name: " << name;
    cout << "\n HP: " << hp;
    cout << "\n Attack: " << attack;
    file.close();

}

int main()
{
    createHero("player1.txt");
    createHero("player2.txt");


   


   
}

