#ifndef CLAPTRAP_HPP
 #define CLAPTRAP_HPP

#include <string>
#include <iostream>

class Claptrap
{
	public:
		Claptrap(std::string name);
		~Claptrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void showStatus(void);
		const std::string& getName();
		const int& getHitPoint();
		const int& getEnergyPoint();
		const int& getAttackDamage();

	private:
		std::string	_name;
		int _hitPoint;
		int _energyPoint;
		int _attackDamage;

		const static int hit = 10;
		const static int energy = 10;
		const static int damage = 0;
};

#endif