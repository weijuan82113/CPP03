#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	std::cout << "----ClapTrap----" << std::endl;
	ClapTrap *clap = new DiamondTrap("the clap");
	clap->showStatus();
	clap->attack("scav_enemy");
	clap->showStatus();
	delete(clap);
	std::cout << "----DiamondTrap----" << std::endl;
	DiamondTrap diamond("the diamond");
	diamond.highFiveGuys();
	diamond.guardGate();
	diamond.showStatus();
	diamond.attack("diamond_enemy");
	diamond.takeDamage(30);
	diamond.whoAmI();
	std::cout << "----DiamondTrap Copy----" << std::endl;
	DiamondTrap copyScav1(diamond);
	copyScav1.showStatus();
	DiamondTrap copyScav2("the copy 2");
	copyScav2.showStatus();
	copyScav1 = copyScav2;
	copyScav1.showStatus();

}