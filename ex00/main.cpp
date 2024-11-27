/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:07:42 by bebuber           #+#    #+#             */
/*   Updated: 2024/11/27 19:36:42 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	Zombie* friendZombie = newZombie("Lily");
	friendZombie->announce();
	delete friendZombie;
	
	randomChump("Alex");
	randomChump("Oliver");
	randomChump("William");

	Zombie* myZombie = newZombie("Oscar");
	myZombie->announce();
	delete myZombie;
}
