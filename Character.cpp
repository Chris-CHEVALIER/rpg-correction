#include "Character.hpp"

Character::Character()
{
    life = 100;
    mana = 100;
    name = ""; 
    Weapon newWeapon;
    equipedWeapon = newWeapon;
}

Character::Character(string newName, int newLife, int newMana, string weaponName, int weaponDammages)
{
    life = newLife;
    mana = newMana;
    name = newName;
    equipedWeapon.change(weaponName, weaponDammages);

}

void Character::receiveDammages(int dammages)
{
    life -= dammages;

    if (life < 0 )
    {
        life = 0;
    }
}

void Character::attack(Character &target)
{
    target.receiveDammages(equipedWeapon.getDammages());
}

void Character::takeLifePotion(int lifePoints)
{
    life += lifePoints;

    if (life > 100)
    {
        life = 100;
    } 
}

void Character::switchWeapon(string weaponName, int weaponDammages)
{
    equipedWeapon.change(weaponName, weaponDammages);
}

bool Character::isAlive()
{
    return life > 0;
}

void Character::display()
{
    cout << name << " a " << life << " points de vie et " << mana << " de points de mana" << endl;
}

Character::~Character()
{
    //none
}