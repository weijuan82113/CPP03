#include "ScavTrap.hpp"

Scavtrap::Scavtrap(std::string name)
 : Claptrap(name)
{
	this->_hitPoint = Scavtrap::scavHit;
	this->_energyPoint = Scavtrap::scavEnergy;
	this->_attackDamage = Scavtrap::scavDamage;
	std::cout << this->_name << " : <Scav>constructor" << std::endl;
}

Scavtrap::~Scavtrap()
{
	std::cout << this->_name << " : <Scav>destructor" << std::endl;
}

Scavtrap& Scavtrap::operator=(const Scavtrap& other)
{
	if (this != &other)
	{
		std::cout << "<Scavtrap> Copy assignment operator called" << std::endl;
		_name = other._name;
		_hitPoint = other._hitPoint;
		_energyPoint = other._energyPoint;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

void Scavtrap::attack(const std::string &target)
{
	if (this->_energyPoint - 1 >= 0 && _hitPoint > 0)
	{
		this->_energyPoint -= 1;
		std::cout << "ScavTrap " << this->getName()
		<< " attacks " << target
		<< " causing "  << this->getAttackDamage()
		<< " points of damage!" << std::endl;
		Claptrap(target).takeDamage(getAttackDamage());
	}
	else
	{
		std::cout << "The engergy is exhausted" << std::endl;
	}
}

void Scavtrap::guardGate()
{
	std::cout << "ScavTrap is in Gate keeper mode" << std::endl;
}