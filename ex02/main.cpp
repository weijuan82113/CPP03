#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"


int main()
{
	std::cout << "----Claptrap----" << std::endl;
	Claptrap *clap = new Flagtrap("the Flag");
	clap->showStatus();
	clap->attack("scav_enemy");
	clap->showStatus();
	delete(clap);
	std::cout << "----Flagtrap----" << std::endl;
	Flagtrap flag("flag");
	flag.highFiveGuys();
	flag.showStatus();
	flag.attack("flag_enemy");
	flag.highFiveGuys();
	flag.takeDamage(20);
	flag.showStatus();
	std::cout << "----Flagtrap Copy----" << std::endl;
	Flagtrap copyScav1(flag);
	copyScav1.showStatus();
	Flagtrap copyScav2("the copy 2");
	copyScav2.showStatus();
	copyScav1 = copyScav2;
	copyScav1.showStatus();
}