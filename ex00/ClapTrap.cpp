/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:37:35 by sleon             #+#    #+#             */
/*   Updated: 2023/05/04 15:18:22 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name) : _name(name), _pv(10),
	 _pe(10), _damage(0){
	std::cout << "constructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap &toCopy )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
	return;
}

ClapTrap::~ClapTrap(){
	std::cout << "destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap &toCopy){
	this->_name = toCopy._name;
	this->_pv = toCopy._pv;
	this->_pe = toCopy._pe;
	this->_damage = toCopy._damage;
	return(*this);
}

void	ClapTrap::attack(const std::string& target){
	if (_pe > 0 && _pe > 0)
	{
		this->_pe--;
		std::cout << "ClapTrap " << _name << " attacks " << target;
		std::cout << ", causing " << _damage << " points of damage!";
		std::cout << std::endl;
		std::cout << "He now has " << _pe << " point of energy" << std::endl;
		std::cout << std::endl;
	}
	else
	{
		std::cout << _name << " not enough energy to attack " << target << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (_pv > 0)
	{
		this->_pv -= amount;
		std::cout << "ClapTrap " << _name << " has taken " << amount;
		std::cout << " of damages," << " he now has " << _pv << " point of life left.";
		std::cout << std::endl;
		std::cout << std::endl;
	}

	else
		std::cout << _name << " is dead !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (_pv > 0 && _pe > 0)
	{
		this->_pv += amount;
		this->_pe--;
		std::cout << "ClapTrap " << _name << " is repairing itself " << amount;
		std::cout << " of point of life, he now has " << _pv << " point of life.";
		std::cout << std::endl;
		std::cout << "He now has " << _pe << " point of energy" << std::endl;
		std::cout << std::endl;
	}
	else
		std::cout << _name << " is already dead !" << std::endl;
}
