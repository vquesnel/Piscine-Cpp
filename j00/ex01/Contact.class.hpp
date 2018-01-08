/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 13:16:15 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/07 14:24:24 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_adress;
		std::string email_adress;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;

		Contact(void);
		~Contact(void);
      void add_contact(void);
      void show_contact(int i) const;
      void show_info(void) const;

	private:
		static int _nbContacts;
		void _add_info(const char *info);
		std::string _display_error(const char *info) const;
		std::string _display_info(const char *info) const;
};

#endif
