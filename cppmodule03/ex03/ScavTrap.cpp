#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
:ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	energyPoints = _energyPoints;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " created." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << _name << " destroyed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& source)
:ClapTrap(source)
{
	std::cout << "ScavTrap " << _name << " copied." << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& source)
{
	ClapTrap::operator=(source);
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints--;
		std::cout << "ScavTrap " << _name << " attacks " << target
			<< ", causing " << _attackDamage << " point of damage!"
			<< std::endl;
		std::cout << "ScavTrap " << _name << " has " << _energyPoints
			<< " energy points left." << std::endl;
	}
	else if (_hitPoints == 0)
		std::cout << "ScavTrap " << _name << "is dead." << std::endl;
	else
		std::cout << "ScavTrap " << _name << ": Not enough energy points." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

