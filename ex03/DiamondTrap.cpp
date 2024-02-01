#include "DiamondTrap.hpp"

Diamondtrap::Diamondtrap(std::string name)
	: Claptrap(name + "_clap_name"), Scavtrap(name), Flagtrap(name)
{
	std::cout << name << "<Diamond>constructor" << std::endl;
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
