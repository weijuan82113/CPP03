#include "ScavTrap.hpp"

const int Scavtrap::scavHit;
const int Scavtrap::scavEnergy;
const int Scavtrap::scavDamage;

Scavtrap::Scavtrap(std::string name)
		: Claptrap(name)
{
	_hitPoint = Scavtrap::scavHit;
	_energyPoint = Scavtrap::scavEnergy;
	_attackDamage = Scavtrap::scavDamage;
	std::cout << this->_name << " : <Scav>constructor" << std::endl;
}

Scavtrap::~Scavtrap()
{
	std::cout << this->_name << " : <Scav>destructor" << std::endl;
}

void Scavtrap::guardGate()
{
	std::cout << "ScavTrap is in Gate kepper mode" << std::endl;
}
