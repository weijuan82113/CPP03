#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"


int main()
{
	std::cout << "----Claptrap----" << std::endl;
	Claptrap clap("the clap");
	clap.showStatus();
	clap.attack("enemy");
	clap.beRepaired(10);
	clap.showStatus();
	clap.takeDamage(10);
	std::cout << "----Scavtrap----" << std::endl;
	Scavtrap *scav = new Scavtrap("the Scav");
	scav->showStatus();
	scav->attack("enemy");
	scav->showStatus();
	scav->guardGate();
	std::cout << "----Flagtrap----" << std::endl;
	Flagtrap *flag = new Flagtrap("the Flag");
	flag->showStatus();
	flag->attack("enemy");
	flag->showStatus();
	flag->highFiveGuys();
	delete(scav);
	delete(flag);
}