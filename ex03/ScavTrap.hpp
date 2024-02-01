#ifndef SCAVTRAP_HPP
 #define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class Scavtrap : public virtual Claptrap
{
	public:
		Scavtrap(std::string name);
		~Scavtrap();
		void attack(const std::string& target);
		void guardGate();
		const int& getHit();
		const int& getEnergy();
		const int& getDamage();

	private:
		const static int scavHit = 100;
		const static int scavEnergy = 50;
		const static int scavDamage = 20;

};
#endif