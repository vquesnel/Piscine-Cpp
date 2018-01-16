/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 14:51:22 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/16 15:24:55 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

struct Data
{
	std::string	s1;
	int		    	n;
	std::string	s2;
};

void	 *serialize(void)
{
	char	rdm[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  char  c;
	std::string buf;

	for (c = 0; c < 8; c++)
		buf.push_back(rdm[rand() % static_cast<int>(sizeof(rdm) - 1)]);
	for (c = 0; c < 8; c++)
		buf.push_back(rdm[rand() % 10]);
	for (c = 0; c < 8; c++)
		buf.push_back(rdm[rand() % static_cast<int>(sizeof(rdm) - 1)]);

	return reinterpret_cast<void *>(const_cast<char *>(buf.c_str()));
}

static Data *deserialize(void *raw)
{
	Data *data = new Data;

  std::cout << "Serial data equals = " << static_cast<char *>(raw) <<std::endl;

	std::string result = reinterpret_cast<char *>(raw);
  data->s1 = result.substr(0, 8);
  data->n = atoi(result.substr(8, 8).c_str());
	data->s2 = result.substr(16);

	return data;
}

int		main(void)
{
	srand(static_cast<unsigned int>(time(NULL)));
	Data *data = deserialize(serialize());

	std::cout << data->s1 << std::endl
			  << data->n << std::endl
			  << data->s2 << std::endl;
    delete(data);
	return (0);
}
