#ifndef FragTrap_hpp
#define FragTrap_hpp
#include "ClapTrap.hpp"

class	FragTrap : public virtual ClapTrap
{
public:
	FragTrap(std::string name);
	~FragTrap(void);
	FragTrap(const FragTrap& source);
	FragTrap&	operator=(const FragTrap& source);
	void		highFivesGuys(void);
};

#endif
