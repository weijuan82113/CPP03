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

void Scavtrap::guardGate()
{
	std::cout << "ScavTrap is in Gate keeper mode" << std::endl;
}