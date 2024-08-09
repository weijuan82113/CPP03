#include "FlagTrap.hpp"

FlagTrap::FlagTrap(std::string name)
	: ClapTrap(name)
{
	this->_hitPoint = FlagTrap::flagHit;
	this->_energyPoint = FlagTrap::flagEnergy;
	this->_attackDamage = FlagTrap::flagDamage;
	std::cout << this->_name << " : <Flag>constructor" << std::endl;
}

FlagTrap::~FlagTrap()
{
	std::cout << this->_name << " : <Flag>destructor" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap& copyClass):ClapTrap(copyClass)
{
	std::cout << "<FlagTrap> Copy constructor is called" << std::endl;
	*this = copyClass;
}

FlagTrap& FlagTrap::operator=(const FlagTrap& other)
{
	if (this != &other)
	{
		std::cout << "<FlagTrap> Copy assignment operator is called" << std::endl;
		ClapTrap::operator=(other);
	}
	return *this;
}

void FlagTrap::highFiveGuys(void)
{
	std::cout << "Give me high five!!!" << std::endl;
}