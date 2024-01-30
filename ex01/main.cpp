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

int main()
{
	std::cout << "----Claptrap----" << std::endl;
	Claptrap clap("chen");
	clap.showStatus();
	clap.attack("emnemy");
	clap.showStatus();
	clap.beRepaired(10);
	clap.showStatus();
	clap.takeDamage(10);
	std::cout << "----Scavtrap----" << std::endl;
	Claptrap scav = Scavtrap("wei");
	scav.showStatus();
	scav.attack("emnemy");
	scav.showStatus();
	//scav.guardGate();

}