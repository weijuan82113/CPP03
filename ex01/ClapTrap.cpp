#include "ClapTrap.hpp"

Claptrap::Claptrap(std::string name):
_name(name),
_hitPoint(Claptrap::clapHit),
_energyPoint(Claptrap::clapEnergy),
_attackDamage(Claptrap::clapDamage)
{
	std::cout << this->_name << " : <Clap>constructor" << std::endl;
}

Claptrap::~Claptrap()
{
	std::cout << this->_name << " : <Clap>destructor" << std::endl;
}

const std::string& Claptrap::getName()
{
	return (this->_name);
}

const int& Claptrap::getHitPoint()
{
	return (this->_hitPoint);
}

const int& Claptrap::getEnergyPoint()
{
	return (this->_energyPoint);
}

const int& Claptrap::getAttackDamage()
{
	return (this->_attackDamage);
}

void Claptrap::attack(const std::string& target)
{
	if (this->_energyPoint - 1 >= 0 && _hitPoint > 0 && _hitPoint < UINT_MAX)
	{
		this->_energyPoint -= 1;
		std::cout << "ClapTrap " << this->getName()
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

void Claptrap::
takeDamage(unsigned int amount)
{
	this->_hitPoint -= amount;
	std::cout <<"---show status after attacking" << std::endl;
	this->showStatus();
}

void Claptrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoint - 1 >= 0 && _hitPoint > 0)
	{
		this->_energyPoint -= 1;
		std::cout << getName() << " is repaired by " << amount << std::endl;
		this->_hitPoint += amount;
	}
	else
	{
		std::cout << "The engergy is exhausted" << std::endl;
	}
}

void Claptrap::showStatus(void)
{
	std::cout << "Name : " << getName() << std::endl;
	std::cout << "Hit : " << getHitPoint() << std::endl;
	std::cout << "Energy : " << getEnergyPoint() << std::endl;
	std::cout << "Damage : " << getAttackDamage() << std::endl;
}
