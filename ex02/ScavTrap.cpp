#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
 : ClapTrap(name)
{
	this->_hitPoint = ScavTrap::scavHit;
	this->_energyPoint = ScavTrap::scavEnergy;
	this->_attackDamage = ScavTrap::scavDamage;
	std::cout << this->_name << " : <Scav>constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << " : <Scav>destructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copyClass):ClapTrap(copyClass)
{
	std::cout << "<ScavTrap> Copy constructor is called" << std::endl;
	*this = copyClass;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		std::cout << "<ScavTrap> Copy assignment operator is called" << std::endl;
		ClapTrap::operator=(other);
	}
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoint >= 1 && _hitPoint > 0)
	{
		this->_energyPoint -= 1;
		std::cout << "ScavTrap " << this->getName()
		<< " attacks " << target
		<< " causing "  << this->getAttackDamage()
		<< " points of damage!" << std::endl;
		ClapTrap(target).takeDamage(getAttackDamage());
	}
	else
	{
		std::cout << "The engergy is exhausted" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is in Gate keeper mode" << std::endl;
}