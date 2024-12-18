/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 19:05:39 by bebuber           #+#    #+#             */
/*   Updated: 2024/12/02 21:45:43 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

void Harl::debug() {
	std::cout << "   [ DEBUG ] " << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void Harl::info() {
	std::cout << "   [ INFO ] " << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n"  << std::endl;
}

void Harl::warning() {
	std::cout << "   [ WARNING ] " << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n"  << std::endl;
}

void Harl::error() {
	std::cout << "   [ ERROR ] " << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain(std::string level) {
	const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for(int i = 0; i < 4; ++i) {
		if (levels[i] == level) {
			(this->*functions[i])();
			return;
		}
	}
	std::cout << "Invalid level" << std::endl;
}