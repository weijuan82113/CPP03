#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	std::cout << "----Claptrap----" << std::endl;
	Claptrap clap("the clap");
	clap.showStatus();
	clap.attack("enemy");
	clap.showStatus();
	clap.beRepaired(10);
	clap.showStatus();
	clap.takeDamage(10);
	std::cout << "----Scavtrap----" << std::endl;
	Scavtrap scav("the Scav");
	scav.showStatus();
	scav.attack("enemy");
	scav.guardGate();
	std::cout << "----Flagtrap----" << std::endl;
	Flagtrap flag("the Flag");
	flag.showStatus();
	flag.attack("enemy");
	flag.highFiveGuys();
	std::cout << "----Diamondtrap----" << std::endl;
	Diamondtrap diamond("the diamond");
	diamond.showStatus();
	diamond.attack("enemy");
	diamond.showStatus();
	diamond.highFiveGuys();
	diamond.whoAmI();
	std::cout << "----new Diamondtrap----" << std::endl;
	Claptrap* newClap = new Diamondtrap("newDiamond");
	newClap->showStatus();
	newClap->attack("new enemy");
	delete(newClap);
}