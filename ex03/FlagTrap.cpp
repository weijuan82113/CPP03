#include "FlagTrap.hpp"

Flagtrap::Flagtrap(std::string name)
	: Claptrap(name)
{
	std::cout << this->_name << " : <Flag>constructor" << std::endl;
}

Flagtrap::~Flagtrap()
{
	std::cout << this->_name << " : <Flag>deconstructor" << std::endl;
}

void Flagtrap::highFiveGuys(void)
{
	std::cout << "Give me high five!!!" << std::endl;
}

const int& Flagtrap::getHit()
{
	return (Claptrap::_hitPoint);
}

const int& Flagtrap::getEnergy()
{
	return (Claptrap::_energyPoint);
}

const int& Flagtrap::getDamage()
{
	return (Claptrap::_attackDamage);
}