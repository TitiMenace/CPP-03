#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name){

	std::cout << "ScavTrap Constructor Called" << std::endl;
	
	Hitpoints = 100;
	Energy_points = 50;
	Attack_damage = 20;
	this->Name = name;
	return ;
}

ScavTrap::ScavTrap(void){

	std::cout << "ScavTrap Default Constructor called !" << std::endl;
	
	Hitpoints = 100;
	Energy_points = 50;
	Attack_damage = 20;
	this->Name = "ScavTrapDflt";
	return;
}

ScavTrap::~ScavTrap(void){

	std::cout << "ScavTrap Default Destructor called !" << std::endl;
	return;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &robot){

	std::cout << "ScavTrap Copy Assignement operator called !" << std::endl;
	
	Hitpoints = robot.Hitpoints;
	Energy_points = robot.Energy_points;
	Attack_damage = robot.Attack_damage;
	this->Name = robot.Name;
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &robot) : ClapTrap(robot){

	std::cout << "ScavTrap Copy Constructor Called !" << std::endl;	
	
	(*this) = robot;
	return;
}

void	ScavTrap::attack(const std::string &target){

	if (Hitpoints <= 0){

		std::cout << "ScavTrap is dead, lying on the floor, sadly..." << std::endl;
		return;
	}
	if (this->Energy_points >= 1){
		std::cout << "ScavTrap " << this->Name << " attacks " << target;
		std::cout << ", causing " << this->Attack_damage << " points of damage !" << std::endl;
		this->Energy_points -= 1;
	}
	else
		std::cout <<  "ScavTrap " << this->Name << " has no more energy, sad..." << std::endl;
	return;
}


void	ScavTrap::guardGate(void){

	std::cout << "ScavTrap is now in Gate Keeper mode" << std::endl;

	return;
}

