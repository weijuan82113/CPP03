#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"


int main()
{
	std::cout << "----ClapTrap----" << std::endl;
	ClapTrap *clap = new FlagTrap("the Flag");
	clap->showStatus();
	clap->attack("scav_enemy");
	clap->showStatus();
	delete(clap);
	std::cout << "----FlagTrap----" << std::endl;
	FlagTrap flag("flag");
	flag.highFiveGuys();
	flag.showStatus();
	flag.attack("flag_enemy");
	flag.highFiveGuys();
	flag.takeDamage(20);
	std::cout << "----FlagTrap Copy----" << std::endl;
	FlagTrap copyScav1(flag);
	copyScav1.showStatus();
	FlagTrap copyScav2("the copy 2");
	copyScav2.showStatus();
	copyScav1 = copyScav2;
	copyScav1.showStatus();
}