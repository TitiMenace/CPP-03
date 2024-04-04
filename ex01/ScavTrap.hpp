#pragma once

# include "ClapTrap.hpp"


class	ScavTrap : public ClapTrap {

	public : 

		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap &robot);
		ScavTrap& operator=(const ScavTrap &robot);

		void	attack(const std::string &target);
		void	guardGate(void);
};
