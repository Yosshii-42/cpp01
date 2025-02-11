#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    Weapon  weapon("snowball");
    HumanA *hanap = NULL;

    HumanB*  yosshii = new HumanB("yosshii", hanap);
    yosshii->setWeapon(weapon);
    yosshii->attack();
    HumanA  hana("hana   ", weapon);
    hanap = &hana;

    hana.attack();
    yosshii->setHumanA(&hana);
    yosshii->setWeapon(weapon);
    yosshii->attack();
    weapon.setType("pies");
    hana.setWeapon();
    yosshii->setWeapon(weapon);
    hana.attack();
    yosshii->attack();
    delete yosshii;
    return (0);
}