/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 10:32:46 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/09 12:19:16 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
using namespace std;
# include <cmath>

class Fixed {
  public:
    Fixed(void);
    Fixed(Fixed const &instance);
    Fixed(int const i);
    Fixed(float const f);
    ~Fixed(void);

    Fixed &operator=(Fixed const &rhs);
    float toFloat(void) const;
    int   toInt(void) const;
    int   getRawBits( void ) const;
    void  setRawBits(int const raw);

  private:
    static const int _nbBits;
    int              _rawBits;
};


std::ostream &operator<<(std::ostream &o, Fixed const &i);
#endif