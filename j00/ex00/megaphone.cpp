/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 13:36:45 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/06 13:36:47 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <stdio.h>

int main (int argc, char **argv)
{
	int i = 1;
	int e;

	if (argc > 1)
	{
		while (argv[i])
		{
			e = 0;
			while (argv[i][e])
			{
				std::cout << (char)toupper(argv[i][e]);
				e++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
