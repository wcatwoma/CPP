#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
:_name(name),
_hitPoints(10),
_energyPoints(10),
_attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " created." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << _name << " destroyed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& source)
{
	*this = source;
	std::cout << "ClapTrap " << _name << " copied." << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& source)
{
	if (this != &source)
	{
		_name = source._energyPoints;
		_hitPoints = source._hitPoints;
		_energyPoints = source._energyPoints;
		_attackDamage = source._attackDamage;
	}
	std::cout << "Called assign operator." << std::endl;
	return *this;
}

unsigned int	ClapTrap::getDamageValue(void)
{
	return	_attackDamage;
}

std::string		ClapTrap::getName(void)
{
	return	_name;
}

void		ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target
			<< ", causing " << _attackDamage << " point of damage!"
			<< std::endl;
		std::cout << "ClapTrap " << _name << " has " << _energyPoints
			<< " energy points left." << std::endl;
	}
	else if (_hitPoints == 0)
		std::cout << "ClapTrap " << _name << "is dead." << std::endl;
	else
		std::cout << "ClapTrap " << _name << ": Not enough energy points." << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
	else if (amount >= _hitPoints)
	{
		std::cout << "ClapTrap " << _name << "[HP:" << _hitPoints << "] recieved "
			<< amount << " points of damage and died." << std::endl;
		_hitPoints = 0;
	}
	else
	{
		std::cout << "ClapTrap " << _name << "[HP:" << _hitPoints << "] recieved "
			<< amount << " points of damage." << std::endl;
		_hitPoints -= amount;
	}
}
void		ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints--;
		std::cout << "ClapTrap " << _name << "[HP:" << _hitPoints
			<< "] repaired " << amount << " hit points." << std::endl;
		std::cout << "ClapTrap " << _name << " has " << _energyPoints
			<< " energy points left." << std::endl;
		_hitPoints += amount;
	}
	else if (_hitPoints == 0)
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
	else
		std::cout << "ClapTrap " << _name << ": Not enough energy points." << std::endl;
}
