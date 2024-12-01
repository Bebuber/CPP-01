/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:23:33 by bebuber           #+#    #+#             */
/*   Updated: 2024/11/28 15:42:57 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main() {

	std::string		zombi = "HI THIS IS BRAIN";
	std::string*	stringPTR = &zombi;
	std::string&		stringREF = zombi;
	
	std::cout << "-----Addresses-----\n" << std::endl;
	
	std::cout << "The memory address of the string variable: " << &zombi << std::endl;
	std::cout << "The memory address held by stringPTR:      " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF:      " << &stringREF << std::endl;

	std::cout << "\n------Values------\n" << std::endl;
	
	std::cout << "The value of the string variable:  " << zombi << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;

	return 0;	
}