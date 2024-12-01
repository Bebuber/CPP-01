/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:51:21 by bebuber           #+#    #+#             */
/*   Updated: 2024/12/01 15:16:00 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
	private:
		std::string type;
	public:
		Weapon(std::string type);
		const	std::string& getType();
		void 	setType(std::string type);
};

#endif