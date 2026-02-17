#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	a("Aerion");
	const std::string	target = "Dunk";

	a.attack("Dunk");
	a.takeDamage(5);
	a.beRepaired(20);
	a.attack("Dunk");
	a.takeDamage(20);
	return (0);
};
