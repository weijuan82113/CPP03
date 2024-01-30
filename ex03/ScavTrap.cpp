#include "ScavTrap.hpp"

Scavtrap::Scavtrap(std::string name, int scavHit, int scavEnergy, int scavDamage)
 : Claptrap::Claptrap(name + "_scav_clap_name", scavHit, scavEnergy, scavDamage)
{
	std::cout << this->_name << " : <Scav>constructor" << std::endl;
}

Scavtrap::~Scavtrap()
{
	std::cout << this->_name << " : <Scav>deconstructor" << std::endl;
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

const int& Scavtrap::getHit()
{
	return (scavHit);
}

const int& Scavtrap::getEnergy()
{
	return (scavEnergy);
}

const int& Scavtrap::getDamage()
{
	return (scavDamage);
}