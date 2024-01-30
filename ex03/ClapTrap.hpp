#ifndef CLAPTRAP_HPP
 #define CLAPTRAP_HPP

#include <string>
#include <iostream>

class Claptrap
{
	public:
		Claptrap(std::string name, int hit = clapHit, int energy = clapEnergy, int damage = clapDamage);
		// Claptrap(std::string name, int hit = 0, int energy = 0, int damage = 0);
		~Claptrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void showStatus(void);
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
		const static int clapHit = 10;
		const static int clapEnergy = 10;
		const static int clapDamage = 0;
};

#endif