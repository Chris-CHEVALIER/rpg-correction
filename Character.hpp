#include <iostream>
#pragma once
using namespace std;
#include "Weapon.hpp"

class Character
{
    private:

    string name;
    int life;
    int mana;
    Weapon equipedWeapon;
    
    public:
    
    Character();
    Character (string newName, int newLife, int newMana, string weaponName, int weaponDammages);
    void receiveDammages(int dammages);
    void attack(Character&target);
    void takeLifePotion(int lifePoints);
    void switchWeapon(string weaponName, int weaponDammages);
    bool isAlive();
    void display();
    ~Character();
};