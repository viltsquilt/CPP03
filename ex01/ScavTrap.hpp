#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
			ClapTrap();
			ClapTrap(std::string name);
			ClapTrap(const ClapTrap& orig);
			ClapTrap& operator=(const ClapTrap& orig);
			~ClapTrap();
			void	guardGate();
};
