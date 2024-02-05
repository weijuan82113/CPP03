#ifndef SCAVTRAP_HPP
 #define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class Scavtrap : public virtual Claptrap
{
	public:
		Scavtrap(std::string name);
		~Scavtrap();
		void guardGate();

	protected:
		const static int scavHit = 100;
		const static int scavEnergy = 50;
		const static int scavDamage = 20;


};
#endif