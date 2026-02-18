#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	a("Aerion");
	ScavTrap	b("Baelor");
	const std::string	target = "Dunk";

	a.attack("Dunk");
	b.attack("Maekar");
	a.takeDamage(5);
	a.beRepaired(3);
	b.takeDamage(100);
	b.beRepaired(20);
	b.guardGate();
	b.takeDamage(30);
	b.attack("Maekar");
	a.attack("Dunk");
	a.takeDamage(100);
	return (0);
};
