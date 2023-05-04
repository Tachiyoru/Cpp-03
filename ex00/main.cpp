/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:16:47 by sleon             #+#    #+#             */
/*   Updated: 2023/05/04 14:25:55 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(){
	Claptrap	Manuel("Manuel");
	Manuel.attack("Naelle");
	Manuel.takeDamage(5);
	Manuel.beRepaired(2);
}
