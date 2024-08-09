#include "ClapTrap.hpp"
#include <limits>

int main()
{
	ClapTrap clap("wei");
	clap.showStatus();
	clap.attack("juan");
	clap.attack("juan");
	clap.attack("juan");
	clap.attack("juan");
	clap.attack("juan");
	clap.attack("juan");
	clap.attack("juan");
	clap.attack("juan");
	clap.attack("juan");
	clap.attack("juan");
	clap.showStatus();
	clap.attack("juan");
	//clap.takeDamage(std::numeric_limits<unsigned int>::max());
	clap.takeDamage(20);
	clap.takeDamage(10);
	clap.beRepaired(10);
	clap.showStatus();
	clap.takeDamage(10);
	clap.showStatus();
	ClapTrap copyone(clap);
	copyone.showStatus();
	ClapTrap newone("the new");
	clap = newone;
	clap.showStatus();
}