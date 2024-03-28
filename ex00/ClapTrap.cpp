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
	this->Name = Name;
	return;
}

Claptrap::~Claptrap(void){

	std::cout << "Destructor Called" << std::endl;
	return;
}

void	Claptrap::attack(const std::string &target){
	
	std::cout << "ClapTrap " << this->Name << " attacks " << target;
	std::cout << ", causing " << this->Attack_damage << " points of damage !" << std::endl;
	this->Energy_points -= 1;
	return;
}

void	Claptrap::takeDamage(unsigned int amout){

	std::cout << "ClapTrap " << this->Name << " loses ";
	std::cout << amount << "hit points";
	this->Hit_points -= amount;
	if (this->Hit_points <= 0){
		std::cout << "ClapTrap " << this->Name << " has no more hit points. He's Dead..." << std::endl;
	return;
}

void	Claptrap::beRepaired(unsigned int amount){
	
	std::cout << "ClapTrap " << this->Name << " regains ";
	std::cout << amount << " hit points back" << std::endl;
	this->Hit_points += amount;


}
