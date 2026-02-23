#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap parametrized constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& orig) : ClapTrap(orig)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& orig)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &orig)
		ClapTrap::operator=(orig);
	return (*this);
}

void	FragTrap::highFiveGuys()
{
	std::cout << _name << " appears on the field of battle after the carnage "
	<< "is over sheepishly requesting high fives from everyone" << std::endl;
}
