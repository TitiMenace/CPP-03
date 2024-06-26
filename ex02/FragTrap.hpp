
#pragma once

# include "ClapTrap.hpp"


class	FragTrap : public ClapTrap {

	public : 

		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap &robot);
		FragTrap& operator=(const FragTrap &robot);

		void	attack(const std::string &target);
		void	highFivesGuys(void);
};
