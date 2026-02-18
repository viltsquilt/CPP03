#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& orig)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	_name = orig._name;
	_hitPoints = orig._hitPoints;
	_energyPoints = orig._energyPoints;
	_attackDamage = orig._attackDamage;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& orig)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	_name = orig._name;
	_hitPoints = orig._hitPoints;
	_energyPoints = orig._energyPoints;
	_attackDamage = orig._attackDamage;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
		_energyPoints -= 1;
	else if (_hitPoints == 0)
	{
		std::cout << _name << "'s fingers feel like wood" << std::endl;
		return ;
	}
	else if (_energyPoints == 0)
	{
		std::cout << _name << " has a cracked visor" << std::endl;
		return ;
	}
	std::cout << _name << " goes berserk and attacks " << target << " causing "
	<< _attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " <<_name << " is now in gate keeper mode" << std::endl;
}
