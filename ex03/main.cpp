#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"
#include "DiamondTrap.hpp"


int main()
{
	std::cout << "----Claptrap----" << std::endl;
	Claptrap clap("the clap");
	clap.showStatus();
	clap.attack("emnemy");
	clap.showStatus();
	clap.beRepaired(10);
	clap.showStatus();
	clap.takeDamage(10);
	std::cout << "----Scavtrap----" << std::endl;
	Scavtrap scav("the Scav");
	scav.showStatus();
	scav.attack("emnemy");
	scav.guardGate();
	std::cout << "----Flagtrap----" << std::endl;
	Flagtrap flag("the Flag");
	flag.showStatus();
	flag.attack("emnemy");
	flag.highFiveGuys();
	std::cout << "----Diamondtrap----" << std::endl;
	Diamondtrap diamond("the diamond");
}