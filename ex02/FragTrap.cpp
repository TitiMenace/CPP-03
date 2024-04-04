#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name){

	std::cout << "FragTrap Constructor Called" << std::endl;
	
	Hitpoints = 100;
	Energy_points = 100;
	Attack_damage = 30;
	this->Name = name;
	return ;
}

FragTrap::FragTrap(void){

	std::cout << "FragTrap Default Constructor called !" << std::endl;
	
	Hitpoints = 100;
	Energy_points = 100;
	Attack_damage = 30;
	this->Name = "FragTrapDflt";
	return;
}

FragTrap::~FragTrap(void){

	std::cout << "FragTrap Default Destructor called !" << std::endl;
	return;
}

FragTrap	&FragTrap::operator=(const FragTrap &robot){

	std::cout << "FragTrap Copy Assignement operator called !" << std::endl;
	
	Hitpoints = robot.Hitpoints;
	Energy_points = robot.Energy_points;
	Attack_damage = robot.Attack_damage;
	this->Name = robot.Name;
	return (*this);
}

FragTrap::FragTrap(const FragTrap &robot) : ClapTrap(robot){

	std::cout << "FragTrap Copy Constructor Called !" << std::endl;	
	
	(*this) = robot;
	return;
}

void	FragTrap::attack(const std::string &target){

	if (Hitpoints <= 0){

		std::cout << "FragTrap is dead, lying on the floor, sadly..." << std::endl;
		return;
	}
	if (this->Energy_points >= 1){
		std::cout << "FragTrap " << this->Name << " attacks " << target;
		std::cout << ", causing " << this->Attack_damage << " points of damage !" << std::endl;
		this->Energy_points -= 1;
	}
	else
		std::cout <<  "FragTrap " << this->Name << " has no more energy, sad..." << std::endl;
	return;
}


void	FragTrap::highFivesGuys(void){

	std::cout << "Give me a High Five bro !" << std::endl;
	return ;
}
