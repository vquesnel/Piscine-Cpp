/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 10:11:09 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/18 11:04:18 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.template.hpp"

int		main(void)
{
	std::string		sTab[] = { "toto", "tata", "tutu" };
	int				iTab[] = { 1, 2, 3, 4, 5 };

	Array<std::string>	s_arr(3);
	Array<int>			i_arr;
  Array<int>      i_arr2(5);

  for (unsigned int i = 0; i < i_arr2.size(); i++) {
    i_arr2[i] = iTab[i];
  }

  i_arr = i_arr2;

	for (unsigned int i = 0; i < i_arr.size(); i++)
	{
		try
		{
			s_arr[i] = sTab[i];
			std::cout << s_arr[i] << " " << sTab[i] << std::endl;
			std::cout << i_arr[i] << " " << iTab[i] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	return (0);
}
