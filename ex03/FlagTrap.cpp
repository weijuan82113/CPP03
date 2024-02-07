#include "FlagTrap.hpp"

const int Flagtrap::flagHit;
const int Flagtrap::flagEnergy;
const int Flagtrap::flagDamage;

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
	std::cout << this->_name << " : <Flag>destructor" << std::endl;
}

Flagtrap& Flagtrap::operator=(const Flagtrap& other)
{
	if (this != &other)
	{
		std::cout << "<Flagtrap> Copy assignment operator called" << std::endl;
		_name = other._name;
		_hitPoint = other._hitPoint;
		_energyPoint = other._energyPoint;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

void Flagtrap::highFiveGuys(void)
{
	std::cout << "Give me high five!!!" << std::endl;
}