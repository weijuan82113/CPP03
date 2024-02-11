#ifndef SCAVTRAP_HPP
 #define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap& copyClass);
		ScavTrap& operator=(const ScavTrap& other);
		void attack(const std::string &target);
		void guardGate();

	protected:
		const static unsigned int scavHit = 100;
		const static unsigned int scavEnergy = 50;
		const static unsigned int scavDamage = 20;

	private:
		ScavTrap();

};
#endif