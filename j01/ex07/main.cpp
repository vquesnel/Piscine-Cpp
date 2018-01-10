/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:51:12 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/10 09:25:34 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string ft_toupper(std::string str)
{
  std::string result;

  for(size_t i = 0; i < str.size(); i++) {
    result += toupper(str[i]);
  }
  return result;
}

void ft_replace (char **av)
{
  std::string   newfile;
  std::ifstream file;
  std::ofstream replaceFile;
  std::string   line;
  std::string   buffer;
  std::string   av2(av[2]);
  std::string   av3(av[3]);

  newfile = ft_toupper(av[1]) + ".replace";
  file.open(av[1]);
  if (file.is_open()) {
    replaceFile.open(newfile);
    while (getline(file, line)) {
       buffer += line;
       buffer += "\n";
    }
    file.close();
    while (buffer.find(av2) != (size_t)-1){
      buffer.replace(buffer.find(av2), av2.size(), av3);
    }
    replaceFile << buffer;
    replaceFile.close();
  }
  else
    std::cout << "unable to open " << av[1] << std::endl;
}

int		main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "Error:" << std::endl << "usage: ./replace <Filename> <string1> <string2>" << std::endl;
	else
		ft_replace(av);
	return (0);
}
