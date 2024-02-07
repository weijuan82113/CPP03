#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "----Claptrap----" << std::endl;
	Claptrap clap("chen");
	clap.showStatus();
	clap.attack("clap_enemy");
	clap.showStatus();
	clap.attack("clap_enemy");
	clap.attack("clap_enemy");
	clap.attack("clap_enemy");
	clap.attack("clap_enemy");
	clap.attack("clap_enemy");
	clap.attack("clap_enemy");
	clap.attack("clap_enemy");
	clap.attack("clap_enemy");
	clap.attack("clap_enemy");
	clap.attack("clap_enemy");
	clap.showStatus();
	clap.beRepaired(10);
	clap.takeDamage(10);
	std::cout << "----Scavtrap----" << std::endl;
	Claptrap *scav = new Scavtrap("wei");
	scav->showStatus();
	scav->attack("scav_enemy");
	scav->showStatus();
	//scav->guardGate();
	delete (scav);
	std::cout << "----robot----" << std::endl;
	Scavtrap robot = Scavtrap("robot");
	robot.showStatus();
	robot.attack("robot_enemy");
	robot.guardGate();
	robot.showStatus();

}