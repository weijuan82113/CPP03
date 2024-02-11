#ifndef DIAMOND_HPP
 #define DIAMOND_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

class Diamondtrap: public Scavtrap, public Flagtrap
{
	public:
		Diamondtrap(std::string name);
		~Diamondtrap();
		Diamondtrap(const Diamondtrap& copyClass);
		Diamondtrap& operator=(const Diamondtrap& other);
		void attack(const std::string& target);
		void whoAmI();
	private:
		Diamondtrap();
		std::string _name;
};

#endif