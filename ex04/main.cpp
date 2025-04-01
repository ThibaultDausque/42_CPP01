/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdausque <tdausque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:07:53 by thibault          #+#    #+#             */
/*   Updated: 2025/04/01 10:26:04 by tdausque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void replace_text(const std::string search, const std::string replace, const char *filename)
{
	std::string		f_read;
	std::ofstream	replace_file("test.replace");
	std::ifstream	file_origin(filename);
	std::ifstream	file_replace("test.replace");
	size_t				pos;

	while (getline(file_origin, f_read))
	{
		pos = 0;
		while ((pos = f_read.find(search)) != std::string::npos)
		{
			f_read.erase(pos, search.length());
			f_read.insert(pos, replace);
		}
		replace_file << f_read;
	}
	replace_file.close();
	file_origin.close();
}

int main(int ac, char **av)
{
	const char	*filename;
	std::string	search;
	std::string	replace;

	if (ac != 4)
		return (1);

	filename = av[1];
	search = av[2];
	replace = av[3];
	replace_text(search, replace, filename);
	return (0);
}
