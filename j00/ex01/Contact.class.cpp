/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 13:16:08 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/08 16:17:09 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
	Contact::_nbContacts++;
	if (Contact::_nbContacts == 8)
		std::cout << "Contact list initialized" << std::endl;
	return;
}

Contact::~Contact(void)
{
	return;
}

void Contact::_add_info(const char *info){
	std::string data = this->_display_info(info);
	while (data.empty())
	{
		data = this->_display_error(info);
	}
	if ( strcmp(info, "first name") == 0)
			this->first_name = data;
	else if ( strcmp(info, "last name") == 0)
			this->last_name = data;
	else if ( strcmp(info, "nickname") == 0)
			this->nickname = data;
	else if ( strcmp(info, "login") == 0)
			this->login = data;
	else if ( strcmp(info, "postal adress") == 0)
			this->postal_adress = data;
	else if ( strcmp(info, "email adress") == 0)
			this->email_adress = data;
	else if ( strcmp(info, "phone number") == 0)
			this->phone_number = data;
	else if ( strcmp(info, "birthday date") == 0)
			this->birthday_date = data;
	else if ( strcmp(info, "favorite meal") == 0)
			this->favorite_meal = data;
	else if ( strcmp(info, "underwear color") == 0)
			this->underwear_color = data;
	else if ( strcmp(info, "darkest secret") == 0)
			this->darkest_secret = data;
}

void Contact::add_contact(void)
{
   int i = 0;
   const char *category[] = {
      "first name", "last name", "nickname",
      "login", "postal adress", "email adress",
      "phone number", "birthday date", "favorite meal",
      "underwear color", "darkest secret"};
	if (Contact::_nbContacts == 0) {
		std::cout << "Your phoneBook can contains only 8 contacts"<< std::endl;
	}
	else {
   	while ( i <= 10 ) {
	   	this->_add_info(category[i]);
      	i++;
   	}
		std::cout << "contact added to phonebook" << std::endl;
		Contact::_nbContacts--;
	}
}

void Contact::show_contact(int i) const
{
	std::cout << std::right << std::setw(10) << i + 1 << "|";
 	std::cout << std::right << std::setw(10) <<  ((this->first_name.length() > 10) ?
 	this->first_name.substr(0, 9).append(".") : this->first_name.substr(0, 10)) << "|";
  	std::cout << std::right << std::setw(10) << ((this->last_name.length() > 10) ?
	this->last_name.substr(0, 9).append(".") : this->last_name.substr(0, 10)) << "|";
  	std::cout << std::right << std::setw(10) << ((this->nickname.length() > 10) ?
	this->nickname.substr(0, 9).append(".") : this->nickname.substr(0, 10)) << "|" << std::endl;
}

void Contact::show_info(void) const
{
	std::cout << "first name: " << this->first_name << std::endl;
	std::cout << "last name: " << this->last_name << std::endl;
	std::cout << "nickname: " << this->nickname << std::endl;
	std::cout << "login: " << this->login << std::endl;
	std::cout << "postal adress: " << this->postal_adress << std::endl;
	std::cout << "email adress: " << this->email_adress << std::endl;
	std::cout << "phone number: " << this->phone_number << std::endl;
	std::cout << "birthday date: " << this->birthday_date << std::endl;
	std::cout << "favorite meal: " << this->favorite_meal << std::endl;
	std::cout << "underwear color: " << this->underwear_color << std::endl;
	std::cout << "darkest secret: " << this->darkest_secret << std::endl;
}

std::string Contact::_display_error(const char *info) const
{
		std::cout << "Please enter non empty data!" << std::endl;
		return this->_display_info(info);
}

std::string Contact::_display_info(const char *info) const
{
	std::string data;
	std::cout << info << " : ";
  std::getline(std::cin, data, '\n');
  return data;
}

int Contact::_nbContacts = 0;
