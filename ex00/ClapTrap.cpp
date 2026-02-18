#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{

}

ClapTrap::ClapTrap(const ClapTrap& orig)
{
	std::cout << "Copy constructor called" << std::endl;
	_name = orig._name;
	_hitPoints = orig._hitPoints;
	_energyPoints = orig._energyPoints;
	_attackDamage = orig._attackDamage;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& orig)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_name = orig._name;
	_hitPoints = orig._hitPoints;
	_energyPoints = orig._energyPoints;
	_attackDamage = orig._attackDamage;
	return (*this);
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 10;
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
		_energyPoints -= 1;
	else if (_hitPoints == 0)
	{
		std::cout << _name << " has been defeated" << std::endl;
		return ;
	}
	else if (_energyPoints == 0)
	{
		std::cout << _name << " has no energy left!" << std::endl;
		return ;
	}
	std::cout << _name << " attacks " << target
	<< " causing " << _attackDamage << " points of damage!" << std::endl; 
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints < amount)
	{
		_hitPoints = 0;
		std::cout << _name << " has yielded" << std::endl;
		return ;
	}
	else
	{
		_hitPoints -= amount;
		std::cout << _name << " has taken "
		<< amount << " points of damage!" << std::endl;
	}

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0)
		_energyPoints -= 1;
	if ((_hitPoints + amount) >= 10)
	{
		std::cout << _name << " healed to full health!" << std::endl;
		_hitPoints = 10;
		return ;
	}
	else if (_energyPoints == 0)
	{
		std::cout << _name << " has used up all of their energy points!" << std::endl;
		return ;
	}
	_hitPoints += amount;
	std::cout << _name << " has repaired itself by " << amount
	<< " points!" << std::endl; 
}
