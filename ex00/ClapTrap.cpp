/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 20:11:21 by tschecro          #+#    #+#             */
/*   Updated: 2024/04/08 13:45:51 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void){

	std::cout << " ClapTrap Default Constructor Called" << std::endl;
	
	Hitpoints = 10;
	Energy_points = 10;
	Attack_damage = 0;
	this->Name = "ClapTrapDflt";
	return;
}


ClapTrap::ClapTrap(std::string Name){

	std::cout << "Constructor Called" << std::endl;

	Hitpoints = 10;
	Energy_points = 10;
	Attack_damage = 0;
	this->Name = Name;
	return;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &robot){

	std::cout << "Copy Assignement operator called !" << std::endl;
	
	Hitpoints = robot.Hitpoints;
	Energy_points = robot.Energy_points;
	Attack_damage = robot.Attack_damage;
	this->Name = robot.Name;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &robot){

	std::cout << "Copy Constructor Called !" << std::endl;	
	
	(*this) = robot;
	return;
}

ClapTrap::~ClapTrap(void){

	std::cout << "Destructor Called" << std::endl;
	return;
}

void	ClapTrap::attack(const std::string &target){
	
	if (Hitpoints <= 0){

		std::cout << "ClapTrap " << this->Name << " is dead, lying on the floor, sadly..." << std::endl;
		return;
	}
	if (this->Energy_points >= 1){
		std::cout << "ClapTrap " << this->Name << " attacks " << target;
		std::cout << ", causing " << this->Attack_damage << " points of damage !" << std::endl;
		this->Energy_points -= 1;
	}
	else
		std::cout <<  "ClapTrap " << this->Name << " has no more energy, sad..." << std::endl;
	return;
}

void	ClapTrap::takeDamage(unsigned int amount){

	if (Hitpoints <= 0){

		std::cout << "ClapTrap " << this->Name << " is dead, lying on the floor, sadly..." << std::endl;
		return;
	}
	if (this->Energy_points > 0){
		std::cout << "ClapTrap " << this->Name << " loses ";
		std::cout << amount << " hit points" << std::endl;
		this->Hitpoints -= amount;
		if (this->Hitpoints <= 0)
			std::cout << "ClapTrap " << this->Name << " has no more hit points. He's Dead..." << std::endl;
	}
	else
		std::cout <<  "ClapTrap " << this->Name << " has no more energy, sad..." << std::endl;
	return;
}

void	ClapTrap::beRepaired(unsigned int amount){
	
	
	if (Hitpoints <= 0){

		std::cout << "ClapTrap " << this->Name << " is dead, lying on the floor, sadly..." << std::endl;
		return;
	}
	if (this->Energy_points >= 1){
		std::cout << "ClapTrap " << this->Name << " regains ";
		std::cout << amount << " hit points back" << std::endl;
		this->Hitpoints += amount;
		this->Energy_points -= 1;
	}
	else
		std::cout <<  "ClapTrap " << this->Name << " has no more energy, sad..." << std::endl;
	return ;
}
