#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    Weapon  snow("snow balls");
    HumanA  hana("hana   ", snow);

    hana.attack();

    HumanB  yosshii("yosshii");
    yosshii.attack();
    yosshii.setWeapon(snow);
    yosshii.attack();

    snow.setType("pie");
    hana.attack();
    yosshii.attack();
    return (0);
}