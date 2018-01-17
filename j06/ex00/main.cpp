/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 12:53:08 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/17 15:01:07 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Conv.hpp"

int				main(const int ac, const char **av)
{
	if (ac != 2)
	{
		std::cerr << *av << ": One literal value needed" << std::endl;
		return ERROR;
	}
	std::string check(av[1]);
	if (!check.size()) {
		std::cerr << *av << ": Empty param" << std::endl;
		return ERROR;
	}

	Conv		conv(av[1]);

	std::cout.precision(1);
	std::cout << std::fixed;

	if (conv.getType() == ERROR)
	{
		std::cerr << *av << ": Unkown type" << std::endl;
		return ERROR;
	}
	try
	{
		std::cout << "char: '" << conv.toChar() << "'" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "int: " << conv.toInt() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "float: " << conv.toFloat() << "f" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "double: " << conv.toDouble() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
