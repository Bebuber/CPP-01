/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 15:23:39 by bebuber           #+#    #+#             */
/*   Updated: 2024/12/01 15:36:13 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name), weapon(nullptr) {}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}

void HumanB::attack() {
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}