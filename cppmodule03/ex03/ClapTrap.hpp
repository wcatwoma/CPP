#ifndef ClapTrap_hpp
#define ClapTrap_hpp
#include <iostream>

class	ClapTrap
{
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& source);
	~ClapTrap(void);
	ClapTrap&	operator=(const ClapTrap& source);
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	unsigned int	getDamageValue(void);
	std::string		getName(void);
protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
};


#endif
