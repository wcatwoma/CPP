#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
	DiamondTrap	a("Bruno");
	FragTrap	b("Mary");
	DiamondTrap	c("Gustaf");

	b.attack(c.getName());
	c.takeDamage(b.getDamageValue());
	c.beRepaired(2);
	for(int i = 0; i < 11; i++)
	{
		a.attack(b.getName());
		b.takeDamage(a.getDamageValue());
		b.beRepaired(2);
	}
	a.whoAmI();
	a.guardGate();
	a.highFivesGuys();
	c = a;
	c.whoAmI();
}
