/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:08:52 by bebuber           #+#    #+#             */
/*   Updated: 2024/11/28 15:20:42 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {

	int N = 15;
	Zombie* horde = zombieHorde(N, "Horde_Zombie");

	if (horde)
	{
		for (int i = 0; i < N; ++i) {
			horde[i].announce();
		}
		delete[] horde;
	}
	
	return 0;
}