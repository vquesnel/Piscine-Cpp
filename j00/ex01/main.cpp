/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 13:15:29 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/07 11:50:25 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

static void display_index(Contact *ct, int nb_contacts) {
   std::string index;
   std::cout << "index : ";
   std::getline(std::cin, index, '\n');
   int nb = std::atoi(index.c_str());
   if (std::cin.fail() || nb > 8 || nb < 1 || nb > nb_contacts)
   {
      std::cout << "Please enter a valid index,  between 1 and " << nb_contacts << std::endl;
      display_index(ct, nb_contacts);
   }
   else
      ct[nb - 1].show_info();
}

static void display_column(void){
   int a = 0;
   const char *category[] = {"index", "first name", "last name", "nickname"};
   while (a < 4) {
      std::cout << std::right << std::setw(10) << category[a] << "|";
      a++;
   }
   std::cout << std::endl;
}

static void search_key(Contact *ct) {
   int j = 0;
   int e = 0;
   display_column();
   while (j < 8) {
      if (!ct[j].login.empty()) {
         ct[j].show_contact(j);
         e++;
      }
      j++;
   }
   if ( e > 0 ) {
      display_index(ct, e);
   }
   else {
      std::cout << std::setw(80 / 2) <<"your phoneBook seems to be empty" << std::endl;
   }
}

int main(void)
{
	Contact ct[8];
	std::string key;
	int i = 0;

	while (std::getline(std::cin, key, '\n'))
	{
		if (key == "ADD")
		{
         ct[i].add_contact();
			i++;
		}
		else if (key == "SEARCH")
         search_key(ct);
		else if (key == "EXIT")
		{
			std::cout << "Your contacts has been deleted" << std::endl;
			break ;
		}
      else {
         std::cout << "Error: Please Enter ADD, SEARCH or EXIT." << std::endl;
      }
	}
	return (0);
}
