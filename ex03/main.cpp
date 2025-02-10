#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    Weapon  weapon("snow balls");

    HumanA* ptr = NULL;
    HumanB* yosshii = new HumanB("Yosshii", ptr);

    yosshii->setWeapon(weapon);
    yosshii->attack();

    HumanA  hana("Hana   ", weapon);

    hana.attack();
    ptr = &hana;
    yosshii->setHumanA(&hana);
    yosshii->setWeapon(weapon);
    yosshii->attack();
    weapon.setType("pies");
    hana.setWeapon(weapon);
    yosshii->setWeapon(weapon);
    hana.attack();
    yosshii->attack();
    delete yosshii;
    return (0);
}