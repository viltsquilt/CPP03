#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	a("Aerion");
	ScavTrap	b("Dunk");
	const std::string	target = "Dunk";

	a.attack("Dunk");
	a.takeDamage(5);
	a.beRepaired(3);
	a.attack("Dunk");
	a.takeDamage(20);
	std::cout << "Aerion shouts: I yield!" << std::endl;
	return (0);
};
