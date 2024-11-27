/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:49:54 by bebuber           #+#    #+#             */
/*   Updated: 2024/11/27 20:22:09 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() {
	std::cout << name << " is being destroyed\n";
}

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
void Zombie::setName(std::string name) {
	this->name = name;	
}

Zombie* zombieHorde( int N, std::string name ) {

	if (N <= 0) return nullptr;
	
	Zombie* horde = new Zombie[N];

	for (int i = 0; i < N; ++i) {
		horde[i].setName(name);
	}
	
	return horde;
}
