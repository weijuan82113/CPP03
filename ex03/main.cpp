#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	std::cout << "----Claptrap----" << std::endl;
	Claptrap *clap = new Diamondtrap("the clap");
	clap->showStatus();
	clap->attack("scav_enemy");
	clap->showStatus();
	delete(clap);
	std::cout << "----Diamondtrap----" << std::endl;
	Diamondtrap diamond("the diamond");
	diamond.highFiveGuys();
	diamond.guardGate();
	diamond.showStatus();
	diamond.attack("diamond_enemy");
	diamond.takeDamage(30);
	diamond.showStatus();
	diamond.whoAmI();
	std::cout << "----Diamondtrap Copy----" << std::endl;
	Diamondtrap copyScav1(diamond);
	copyScav1.showStatus();
	Diamondtrap copyScav2("the copy 2");
	copyScav2.showStatus();
	copyScav1 = copyScav2;
	copyScav1.showStatus();

}