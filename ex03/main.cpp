/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:16:47 by sleon             #+#    #+#             */
/*   Updated: 2023/05/04 18:56:52 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main(){
	ClapTrap	Manuel("Manuel");

	Manuel.attack("Naelle");
	Manuel.takeDamage(5);
	Manuel.beRepaired(2);

	FragTrap	Naelle("Naelle");

	Naelle.attack("Manuel");
	Naelle.takeDamage(54);
	Naelle.beRepaired(12);
	Naelle.highFivesGuys();

	ScavTrap	Clem("Clem");

	Clem.attack("Manuel");
	Clem.takeDamage(2);
	Clem.beRepaired(1);
	Clem.guardGate();

	DiamondTrap	Shanley("Shanley");

	Shanley.attack("Manuel");
	Shanley.takeDamage(2);
	Shanley.beRepaired(1);
	Shanley.whoAmI();
}
