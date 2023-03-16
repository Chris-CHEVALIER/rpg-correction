#include "Weapon.hpp"

Weapon::Weapon()
{
    name = "épée en bois";
    dammages = 10;
}

Weapon::Weapon(int newDammages, string newName)
{
    dammages = newDammages;
    name = newName;
}

void Weapon::change(string newName, int newDammages)
{
    dammages = newDammages;
    name = newName;
}

void Weapon::display()
{
    cout << "votre " << name << " fait " << dammages << " dégats" << endl;
}

int Weapon::getDammages() const
{
    return dammages;
}