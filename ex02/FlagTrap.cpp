#include "FlagTrap.hpp"

Flagtrap::Flagtrap(std::string name, int flagHit, int flagEnergy, int flagDamage)
	: Claptrap::Claptrap(name, flagHit, flagEnergy, flagDamage)
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