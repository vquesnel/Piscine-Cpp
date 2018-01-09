/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 10:32:46 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/09 11:36:33 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
using namespace std;

class Fixed {
  public:
    Fixed(void);
    Fixed(Fixed const &instance);
    ~Fixed(void);

    Fixed &operator=(Fixed const &rhs);
    int   getRawBits( void ) const;
    void  setRawBits(int const raw);

  private:
    static const int _nbBits;
    int              _rawBits;
};

#endif