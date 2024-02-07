#include "ClapTrap.hpp"

int main()
{
	Claptrap clap("wei");
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
	clap.takeDamage(20);
	clap.takeDamage(10);
	clap.beRepaired(10);
	clap.showStatus();
	clap.takeDamage(10);
	clap.showStatus();
	Claptrap copyone(clap);
	copyone.showStatus();
	Claptrap newone("the new");
	clap = newone;
	clap.showStatus();




}