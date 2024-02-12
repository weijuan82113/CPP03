#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):
_name(name),
_hitPoint(ClapTrap::clapHit),
_energyPoint(ClapTrap::clapEnergy),
_attackDamage(ClapTrap::clapDamage)
{
	std::cout << this->_name << " : <Clap>constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << " : <Clap>destructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copyClass)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copyClass;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		_name = other._name;
		_hitPoint = other._hitPoint;
		_energyPoint = other._energyPoint;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

const std::string& ClapTrap::getName()
{
	return (this->_name);
}

const unsigned int& ClapTrap::getHitPoint()
{
	return (this->_hitPoint);
}

const unsigned int& ClapTrap::getEnergyPoint()
{
	return (this->_energyPoint);
}

const unsigned int& ClapTrap::getAttackDamage()
{
	return (this->_attackDamage);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoint >= 1 && _hitPoint > 0)
	{
		this->_energyPoint -= 1;
		std::cout << "ClapTrap " << this->getName()
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

void ClapTrap::showStatus(void)
{
	std::cout << "Name : " << getName() << std::endl;
	std::cout << "Hit : " << getHitPoint() << std::endl;
	std::cout << "Energy : " << getEnergyPoint() << std::endl;
	std::cout << "Damage : " << getAttackDamage() << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoint == 0)
		std::cout << "---the enemy's HitPoint is already died--" << std::endl;
	else if (amount >= _hitPoint)
		_hitPoint = 0;
	else
		_hitPoint -= amount;
	std::cout << "---show status after attacking--" << std::endl;
	this->showStatus();
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoint >= 1 && _hitPoint > 0)
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


