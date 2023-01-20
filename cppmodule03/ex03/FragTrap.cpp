#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
:ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " created." << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << _name << " destroyed." << std::endl;
}

FragTrap::FragTrap(const FragTrap& source)
:ClapTrap(source)
{
	std::cout << "FragTrap " << _name << " copied." << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& source)
{
	ClapTrap::operator=(source);
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap: Positive high fives request." << std::endl;
}
