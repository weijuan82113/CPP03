#ifndef DIAMOND_HPP
 #define DIAMOND_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

class Diamondtrap: public Scavtrap, public Flagtrap
{
	public:
		Diamondtrap(std::string name,
				int hit = Flagtrap::getHit(),
				int energy = Scavtrap::getEnergy(),
				int damage = Flagtrap::getDamage());
		void attack(const std::string& target);
		void whoAmI();
		void name();
	private:
		std::string _name;
};

#endif