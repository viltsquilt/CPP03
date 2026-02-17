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
	_energyPoints -= 1;
	std::cout << _name << " attacks " << target
	<< " causing " << _attackDamage << " points of damage!" << std::endl; 
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints = _hitPoints - amount;
	std::cout << _name << " has taken "
	<< amount << " points of damage!" << std::endl; 

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	_energyPoints -= 1;
	_hitPoints = _hitPoints + amount;
	std::cout << _name << " has repaired itself by " << amount
	<< " points!" << std::endl; 
}
