/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 13:16:15 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/08 22:00:35 by vquesnel         ###   ########.fr       */
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
		Contact(void);
		~Contact(void);
		void add_contact(void);
		void show_contact(int i) const;
		void show_info(void) const;
		std::string getLogin(void) const;

	private:
		static int _nbContacts;
		void _add_info(const char *info);
		std::string _display_error(const char *info) const;
		std::string _display_info(const char *info) const;
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _login;
		std::string _postal_adress;
		std::string _email_adress;
		std::string _phone_number;
		std::string _birthday_date;
		std::string _favorite_meal;
		std::string _underwear_color;
		std::string _darkest_secret;
};

#endif
