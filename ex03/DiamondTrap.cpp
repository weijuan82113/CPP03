#include "DiamondTrap.hpp"

Diamondtrap::Diamondtrap(std::string name, int hit, int energy, int damage):
	Scavtrap(name, hit, energy, damage),
	Flagtrap(name, hit, energy, damage)
{
	std::cout << this->Scavtrap::_name << "<Diamond inherit from Scav>constructor" << std::endl;
	std::cout << this->Flagtrap::_name << "<Diamond inherit from Flag>constructor" << std::endl;
}


void Diamondtrap::attack(const std::string& target)
{
	Scavtrap::attack(target);
}

void Diamondtrap::whoAmI()
{
	std::cout << "the diamond name is " << this->_name << std::endl;
	std::cout << "the clap name is " << this->_name << std::endl;
}

void Diamondtrap::name()
{
	std::cout << "---<Diammo>---" << std::endl;
}
