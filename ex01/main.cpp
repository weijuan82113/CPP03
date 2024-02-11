#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "----Claptrap----" << std::endl;
	ClapTrap *clap = new ScavTrap("wei");
	clap->showStatus();
	clap->attack("scav_enemy");
	clap->showStatus();
	delete (clap);
	std::cout << "----Scavtrap----" << std::endl;
	ScavTrap scav("robot");
	scav.guardGate();
	scav.showStatus();
	scav.attack("robot_enemy");
	scav.guardGate();
	scav.showStatus();
	scav.takeDamage(20);
	std::cout << "----Scavtrap Copy----" << std::endl;
	ScavTrap copyScav1(scav);
	copyScav1.showStatus();
	ScavTrap copyScav2("the copy 2");
	copyScav2.showStatus();
	copyScav1 = copyScav2;
	copyScav1.showStatus();
}