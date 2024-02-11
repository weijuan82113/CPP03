#ifndef CLAPTRAP_HPP
 #define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		virtual ~ClapTrap();
		ClapTrap(const ClapTrap& copyClass);
		ClapTrap& operator=(const ClapTrap& other);
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void showStatus();
		const std::string& getName();
		const unsigned int& getHitPoint();
		const unsigned int& getEnergyPoint();
		const unsigned int& getAttackDamage();

	protected:
		std::string	_name;
		unsigned int _hitPoint;
		unsigned int _energyPoint;
		unsigned int _attackDamage;

	private:
		ClapTrap();
		const static unsigned int clapHit = 10;
		const static unsigned int clapEnergy = 10;
		const static unsigned int clapDamage = 0;
};

#endif