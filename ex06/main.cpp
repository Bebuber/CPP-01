/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 20:00:09 by bebuber           #+#    #+#             */
/*   Updated: 2024/12/02 20:25:57 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char* argv[]) {

	if (argc != 2){
		std::cerr << "Error: wrong number of arguments: Usage: ./harlFilter <log level>" << std::endl;
		return 1;
	}

	std::string level = argv[1];
	const char* validLevels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	bool isValid = false;

	for (int i = 0; i < 4; ++i) {
		if (level == validLevels[i]) {
			isValid = true;
			break;
		}
	}
	
	if (!isValid) {
		std::cerr << "Invalid log level. Valid levels are: DEBUG, INFO, WARNING, ERROR" << std::endl;
		return 1;
	}
	Harl harl;
	harl.complain(level);
	
	return 0;
}
