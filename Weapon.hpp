#include <iostream>
#pragma once
using namespace std;

class Weapon
{
private:
    string name;
    int dammages;

public:
    Weapon();
    Weapon(int newDammages, string newName);
    void change(string newName, int newDammages);
    void display();
    int getDammages() const;
};