#include "FlagTrap.hpp"

Flagtrap::Flagtrap(std::string name)
	: Claptrap(name)
{
	this->_hitPoint = Flagtrap::flagHit;
	this->_energyPoint = Flagtrap::flagEnergy;
	this->_attackDamage = Flagtrap::flagDamage;

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