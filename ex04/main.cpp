/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 16:22:37 by bebuber           #+#    #+#             */
/*   Updated: 2024/12/02 21:33:44 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replacingStrings(std::string& source, const std::string& from, const std::string& to)
{
	size_t startPos = 0;
	while ((startPos = source.find(from, startPos)) != std::string::npos)
	{
		source.erase(startPos, from.length());
		source.insert(startPos, to);
		startPos += to.length();
	}
}

int main(int argc, char* argv[])
{
	if (argc != 4)
	{
		std::cerr << "Error: The number of arguments should be 4." << std::endl;
		std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2> " << std::endl;
		return 1;
	}
	
	std::string filename = argv[1];
	std::string searchString1 = argv[2];
	std::string searchString2 = argv[3];

	std::ifstream inputFile(filename);
	if (!inputFile.is_open()) 
	{
		std::cerr << "Error: Could not open the file " << filename << std::endl;
		return 1;
	}
	
	std::string outputFilename = filename + ".replace";
	std::ofstream outputFile(outputFilename);
	std::string line;
	while (std::getline(inputFile, line))
	{
		replacingStrings(line, searchString1, searchString2);
		outputFile << line << std::endl;
	}
	
	inputFile.close();
	outputFile.close();
	
	return 0;
}
