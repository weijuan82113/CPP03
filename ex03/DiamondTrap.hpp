#ifndef DIAMOND_HPP
 #define DIAMOND_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

class DiamondTrap: public ScavTrap, public FlagTrap
{
	public:
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap& copyClass);
		DiamondTrap& operator=(const DiamondTrap& other);
		void attack(const std::string& target);
		void whoAmI();
	private:
		DiamondTrap();
		std::string _name;
};

#endif