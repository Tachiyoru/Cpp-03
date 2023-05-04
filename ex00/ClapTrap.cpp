/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:37:35 by sleon             #+#    #+#             */
/*   Updated: 2023/05/04 14:28:49 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

Claptrap::Claptrap(std::string name) : _name(name), _pv(10),
	 _pe(10), _damage(0){
	std::cout << "constructor called" << std::endl;
}

Claptrap::~Claptrap(){
	std::cout << "destructor called" << std::endl;
}

void	Claptrap::attack(const std::string& target){
	this->_pe--;
	std::cout << "ClapTrap " << _name << " attacks " << target;
	std::cout << ", causing " << _damage << " points of damage!";
	std::cout << std::endl;
	std::cout << "He now has " << _pe << " point of energy" << std::endl;
	std::cout << std::endl;
}

void	Claptrap::takeDamage(unsigned int amount){
	this->_pv -= amount;
	std::cout << "ClapTrap " << _name << " has taken " << amount;
	std::cout << " of damages," << " he now has " << _pv << " point of life left.";
	std::cout << std::endl;
	std::cout << std::endl;
}

void	Claptrap::beRepaired(unsigned int amount){
	this->_pv += amount;
	this->_pe--;
	std::cout << "ClapTrap " << _name << " is repairing itself " << amount;
	std::cout << " of point of life, he now has " << _pv << " point of life.";
	std::cout << std::endl;
	std::cout << "He now has " << _pe << " point of energy" << std::endl;
	std::cout << std::endl;
}
