#ifndef SCAVTRAP_HPP
 #define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class Scavtrap : public Claptrap
{
	public:
		Scavtrap(std::string name, int hit = scavHit, int energy = scavEnergy, int damage = scavDamage);
		~Scavtrap();
		void attack(const std::string& target);
		void guardGate();

	private:
		const static int scavHit = 100;
		const static int scavEnergy = 50;
		const static int scavDamage = 20;

};
#endif