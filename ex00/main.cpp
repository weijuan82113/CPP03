#include "Claptrap.hpp"

int main()
{
	Claptrap clap("wei");
	clap.showStatus();
	clap.attack("juan");
	clap.showStatus();
	clap.beRepaired(10);
	clap.showStatus();
	clap.takeDamage(10);
}