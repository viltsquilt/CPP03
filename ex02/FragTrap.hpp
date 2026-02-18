#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
			FragTrap();
			FragTrap(std::string name);
			FragTrap(const FragTrap& orig);
			FragTrap& operator=(const FragTrap& orig);
			~FragTrap();
			void	highFiveGuys();
};
