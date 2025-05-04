/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 21:39:47 by yabukirento       #+#    #+#             */
/*   Updated: 2025/05/04 10:04:13 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

std::string	replaceString(const std::string& content, const std::string& s1, const std::string& s2)
{
	std::string result;
	size_t pos = 0;
	size_t len_s1 = s1.length();

	while (true)
	{
		size_t found = content.find(s1, pos);
		if (found == std::string::npos)
		{
			result += content.substr(pos);
			break;
		}
		result += content.substr(pos, found - pos);
		result += s2;
		pos = found + len_s1;
	}
	return result;
}

int exitWithError(const std::string& msg) {
    std::cerr << "Error: " << msg << std::endl;
    return 1;
}

int main(int argc, char const *argv[])
{
	if (argc != 4)
		return exitWithError("Usage: ./SedIsForLosers <filename> <s1> <s2>");

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (s1.empty())
		return exitWithError("s1 (search string) must not be empty");

	std::ifstream infile(filename.c_str());
	if (!infile)
		return exitWithError(std::string("cannot open file ") + filename);

	std::stringstream buf;
	buf << infile.rdbuf();
	infile.close();

	std::string replaced = replaceString(buf.str(), s1, s2);

	std::ofstream outfile((filename + ".replace").c_str());
	if (!outfile)
		return exitWithError("cannot create new replaced file");

	outfile << replaced;
	outfile.close();

	std::cout << "Replaced content written to " << filename + ".replace" << std::endl;
	return 0;
}
