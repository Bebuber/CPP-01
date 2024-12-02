/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 19:52:22 by bebuber           #+#    #+#             */
/*   Updated: 2024/12/01 19:55:42 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl {
	private:
		void debug();
		void info();
		void warning();
		void error();
	public:
		Harl();
		void complain(std::string level);
			
};

#endif