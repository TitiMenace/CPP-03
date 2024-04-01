/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 20:11:21 by tschecro          #+#    #+#             */
/*   Updated: 2024/03/26 20:31:50 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


Claptrap::Claptrap(std::string Name){

	std::cout << "Constructor Called" << std::endl;

	Hitpoints = 10;
	Energy_points = 10;
	Attack_damage = 0;
	this->Name = Name;
	return;
}

Claptrap::~Claptrap(void){

	std::cout << "Destructor Called" << std::endl;
	return;
}

void	Claptrap::attack(const std::string &target){
	
	if (Hitpoints <= 0){

		std::cout << "ClapTrap is dead, lying on the floor, sadly..." << std::endl;
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

void	Claptrap::takeDamage(unsigned int amount){

	if (Hitpoints <= 0){

		std::cout << "ClapTrap is dead, lying on the floor, sadly..." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->Name << " loses ";
	std::cout << amount << " hit points" << std::endl;
	this->Hitpoints -= amount;
	if (this->Hitpoints <= 0)
		std::cout << "ClapTrap " << this->Name << " has no more hit points. He's Dead..." << std::endl;
	return;
}

void	Claptrap::beRepaired(unsigned int amount){
	
	
	if (Hitpoints <= 0){

		std::cout << "ClapTrap is dead, lying on the floor, sadly..." << std::endl;
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
