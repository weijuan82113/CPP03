#ifndef FLAGTRAP_HPP
 #define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class Flagtrap: public Claptrap
{
	public:
		Flagtrap(std::string name);
		~Flagtrap();
		Flagtrap& operator=(const Flagtrap& other);
		void highFiveGuys();

	private:
		Flagtrap();
		const static int flagHit = 100;
		const static int flagEnergy = 100;
		const static int flagDamage = 30;
};

#endif