/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 20:05:43 by tschecro          #+#    #+#             */
/*   Updated: 2024/03/26 20:21:13 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class	ClapTrap{

	public:

		
		ClapTrap(void);
		~ClapTrap(void);
		ClapTrap& operator=(const ClapTrap &robot);
		ClapTrap(const ClapTrap &robot);
		
		ClapTrap(std::string Name);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected:

		std::string Name;
		int			Hitpoints;
		int			Energy_points;
		int			Attack_damage;
};

#endif
