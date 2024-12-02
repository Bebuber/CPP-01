/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 20:40:03 by bebuber           #+#    #+#             */
/*   Updated: 2024/12/02 20:40:26 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

	if (N <= 0) return nullptr;
	
	Zombie* horde = new Zombie[N];

	for (int i = 0; i < N; ++i) {
		horde[i].setName(name);
	}
	
	return horde;
}
