/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:07:53 by thibault          #+#    #+#             */
/*   Updated: 2025/03/26 15:19:39 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void  replace_text(const std::string search, const std::string replace, const std::string filename)
{
  std::string      read;
  std::ofstream    replace_file("test.replace");
  std::ifstream    file_origin(filename);
  
  while (getline(file_origin, read))
  {
    replace_file << read;
  }

  replace_file.close();
  file_origin.close();
}

int	main(int ac, char **av)
{
	std::string	filename;
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
