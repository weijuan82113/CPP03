#ifndef FLAGTRAP_HPP
 #define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FlagTrap: public ClapTrap
{
	public:
		FlagTrap(std::string name);
		~FlagTrap();
		FlagTrap(const FlagTrap& copyClass);
		FlagTrap& operator=(const FlagTrap& other);
		void highFiveGuys();

	private:
		FlagTrap();
		const static unsigned int flagHit = 100;
		const static unsigned int flagEnergy = 100;
		const static unsigned int flagDamage = 30;
};

#endif