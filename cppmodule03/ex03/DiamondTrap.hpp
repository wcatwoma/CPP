#ifndef DiamondTrap_hpp
#define DiamondTrap_hpp
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class	DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap(std::string name);
	~DiamondTrap(void);
	DiamondTrap(const DiamondTrap& source);
	DiamondTrap&	operator=(const DiamondTrap& source);
	void			whoAmI(void) const;
private:
	std::string		_name;
};

#endif
