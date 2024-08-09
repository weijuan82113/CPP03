#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"),
	ScavTrap(name), //途中のクラスのconstructorが上書きしない→virtual継承指定いるので、結局同じbaseのconstructorを参照している
	FlagTrap(name)
{
	this -> _name = name;
	this->_hitPoint = FlagTrap::flagHit;
	this->_energyPoint = ScavTrap::scavEnergy;
	this->_attackDamage = FlagTrap::flagDamage;
	std::cout << name << " : <Diamond>constructor" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->_name << " : <Diamond>destructor" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copyClass):ClapTrap(copyClass),ScavTrap(copyClass),FlagTrap(copyClass)
{
	std::cout << "<Diamond> Copy constructor called" << std::endl;
	*this = copyClass;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		std::cout << "<Diamond> Copy assignment operator called" << std::endl;
		_name = other._name;
		ClapTrap::operator=(other);
	}
	return *this;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "the diamond name is " << this->_name << std::endl;
	std::cout << "the clap name is " << this->ClapTrap::_name << std::endl;
}

