#include "DiamondTrap.hpp"

Diamondtrap::Diamondtrap(std::string name)
	: Claptrap(name + "_clap_name"),
	Scavtrap(name),
	Flagtrap(name)
{
	this -> _name = name;
	this->_hitPoint = Flagtrap::flagHit;
	this->_energyPoint = Scavtrap::scavEnergy;
	this->_attackDamage = Flagtrap::flagDamage;
	std::cout << name << "<Diamond>constructor" << std::endl;
}

Diamondtrap::~Diamondtrap()
{
	std::cout << this->_name << " : <Diamond>destructor" << std::endl;
}

Diamondtrap& Diamondtrap::operator=(const Diamondtrap& other)
{
	if (this != &other)
	{
		std::cout << "<Diamond> Copy assignment operator called" << std::endl;
		_name = other._name;
		_hitPoint = other._hitPoint;
		_energyPoint = other._energyPoint;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

void Diamondtrap::attack(const std::string& target)
{
	Scavtrap::attack(target);
}

void Diamondtrap::whoAmI()
{
	std::cout << "the diamond name is " << this->_name << std::endl;
	std::cout << "the clap name is " << this->Claptrap::_name << std::endl;
}

