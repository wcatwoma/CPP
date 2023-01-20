#ifndef ScavTrap_hpp
#define ScavTrap_hpp
#include "ClapTrap.hpp"

class	ScavTrap : public virtual ClapTrap
{
public:
	ScavTrap(std::string name);
	~ScavTrap(void);
	ScavTrap(const ScavTrap& source);
	ScavTrap&	operator=(const ScavTrap& source);
	void		attack(const std::string& target);
	void 		guardGate(void);
protected:
	unsigned int energyPoints;
};

#endif
