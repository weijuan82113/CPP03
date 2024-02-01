#ifndef FLAGTRAP_HPP
 #define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class Flagtrap: public virtual Claptrap
{
	public:
		Flagtrap(std::string name);
		~Flagtrap();
		void highFiveGuys(void);
		const int& getHit();
		const int& getEnergy();
		const int& getDamage();

	private:
		const static int flagHit = 100;
		const static int flagEnergy = 100;
		const static int flagDamage = 30;
};

#endif