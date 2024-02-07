#ifndef CLAPTRAP_HPP
 #define CLAPTRAP_HPP

#include <string>
#include <iostream>

class Claptrap
{
	public:
		Claptrap(std::string name);
		virtual ~Claptrap();
		Claptrap(const Claptrap& copyClass);
		Claptrap& operator=(const Claptrap& other);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void showStatus();
		const std::string& getName();
		const int& getHitPoint();
		const int& getEnergyPoint();
		const int& getAttackDamage();

	protected:
		std::string	_name;
		int _hitPoint;
		int _energyPoint;
		int _attackDamage;

	private:
		Claptrap();
		const static int clapHit = 10;
		const static int clapEnergy = 10;
		const static int clapDamage = 0;
};

#endif