#ifndef FLAGTRAP_HPP
 #define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class Flagtrap: public virtual Claptrap
{
	public:
		Flagtrap(std::string name);
		~Flagtrap();
		Flagtrap(const Flagtrap& copyClass);
		Flagtrap& operator=(const Flagtrap& other);
		void highFiveGuys();

	protected:
		const static int flagHit = 100;
		const static int flagEnergy = 100;
		const static int flagDamage = 30;

	private:
		Flagtrap();
};

#endif