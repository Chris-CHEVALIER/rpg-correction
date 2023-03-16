#include "Character.cpp"
#include "Weapon.cpp"
using namespace std;

int main()
{
    Character yennefer("Yennefer", 100, 50, "epee", 12);
    Character geralt("geralt", 50, 100, "poing", 5);
    yennefer.display();
    geralt.display();
    Weapon lance(20, "lance");
    lance.display();
    yennefer.attack(geralt);
    geralt.display();

    return 0;
}
