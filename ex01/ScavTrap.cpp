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

void Scavtrap::attack(const std::string& target)
{
	std::cout << "ScavTrap <" << this->getName()
	<< "> attacks <" << target
	<< "> causing <"  << this->getAttackDamage()
	<< "> points of damage!" << std::endl;
	this->_energyPoint -= 1;
	Claptrap(target).takeDamage(getAttackDamage());
}

void Scavtrap::guardGate()
{
	std::cout << "ScavTrap is in Gate kepper mode" << std::endl;
}