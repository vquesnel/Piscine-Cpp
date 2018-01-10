/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 14:51:18 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/09 22:42:44 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main(void)
{
	Human	John;

	John.action("meleeAttack", "Tom");
	John.action("rangedAttack", "Alex");
  	John.action("intimidatingShout", "Tony");
	John.action("intimidatiadfsdfgdfsngShout", "Tony");
}
