// #include "ClapTrap.hpp"

// int main()
// {
// 	Claptrap clap("wei");
// 	clap.showStatus();
// 	clap.attack("juan");
// 	clap.showStatus();
// 	clap.beRepaired(10);
// 	clap.showStatus();
// 	clap.takeDamage(10);
// }

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"


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
	std::cout << "----Flagtrap----" << std::endl;
	Flagtrap flag("the Flag");
	flag.showStatus();
	flag.attack("emnemy");
}