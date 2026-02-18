#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap parametrized constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& orig)
{
	_name = orig._name;
	_hitPoints = orig._hitPoints;
	_energyPoints = orig._energyPoints;
	_attackDamage = orig._attackDamage;
}

FragTrap&	FragTrap::operator=(const FragTrap& orig)
{
	_name = orig._name;
	_hitPoints = orig._hitPoints;
	_energyPoints = orig._energyPoints;
	_attackDamage = orig._attackDamage;
	return (*this);
}

void	FragTrap::highFiveGuys()
{
	std::cout << _name << " appears on the field of battle after the carnage "
	<< "is over sheepishly requesting high fives from everyone" << std::endl;
}
