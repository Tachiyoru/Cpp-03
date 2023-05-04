/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:33:17 by sleon             #+#    #+#             */
/*   Updated: 2023/05/04 16:47:01 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20){
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &toCopy) : ClapTrap(toCopy._name)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
	return;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap &toCopy){
	this->_name = toCopy._name;
	this->_pv = toCopy._pv;
	this->_pe = toCopy._pe;
	this->_damage = toCopy._damage;
	return(*this);
}

void	ScavTrap::guardGate(){
	if (_pe > 0)
	{
		this->_pe -= 10;
		std::cout << "ScavTrap " << this->_name << " enters in Gate Keeper mode ";
		std::cout << std::endl;
		std::cout << "He now has " << this->_pe << " point of energy" << std::endl;
		std::cout << std::endl;
	}
	else
	{
		std::cout << _name << " not enough energy to enter guard mode " << std::endl;
	}
}
