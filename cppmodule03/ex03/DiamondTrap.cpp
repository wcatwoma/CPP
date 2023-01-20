#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
:ClapTrap(name),ScavTrap(name),FragTrap(name),_name(name)
{
	ClapTrap::_energyPoints = ScavTrap::energyPoints;
	ClapTrap::_name = name + "_clap_name";
	std::cout << "DiamondTrap " << _name << " created." << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << _name << " destroyed." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& source)
:ClapTrap(source),
ScavTrap(source),
FragTrap(source),
_name(source._name)
{
	std::cout << "DiamondTrap " << _name << " copied." << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& source)
{
	if (this != &source)
	{
		_energyPoints = source._energyPoints;
		_hitPoints = source._hitPoints;
		_energyPoints = source._energyPoints;
		_attackDamage = source._attackDamage;
	}
	std::cout << "Called assign operator." << std::endl;
	return *this;
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
	std::cout << "DiamondTrap name: " << _name << std::endl;
}
