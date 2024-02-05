#include "FlagTrap.hpp"

const int Flagtrap::flagHit;
const int Flagtrap::flagEnergy;
const int Flagtrap::flagDamage;

Flagtrap::Flagtrap(std::string name)
	: Claptrap(name)
{
	_hitPoint = Flagtrap::flagHit;
	_energyPoint = Flagtrap::flagEnergy;
	_attackDamage = Flagtrap::flagDamage;
	std::cout << this->_name << " : <Flag>constructor" << std::endl;
}

Flagtrap::~Flagtrap()
{
	std::cout << this->_name << " : <Flag>destructor" << std::endl;
}

void Flagtrap::highFiveGuys(void)
{
	std::cout << "Give me high five!!!" << std::endl;
}