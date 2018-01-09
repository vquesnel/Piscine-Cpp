/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 10:32:46 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/09 17:28:14 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <cmath>

class Fixed {
  public:
    Fixed(void);
    Fixed(Fixed const &instance);
    Fixed(int const i);
    Fixed(float const f);
    ~Fixed(void);

    Fixed              &operator=(Fixed const &rhs);
    bool               operator>(Fixed const &rhs) const;
    bool               operator<(Fixed const &rhs) const;
    bool               operator>=(Fixed const &rhs) const;
    bool               operator<=(Fixed const &rhs) const;
    bool               operator==(Fixed const &rhs) const;
    bool               operator!=(Fixed const &rhs) const;
    Fixed              operator+(Fixed const &rhs) const;
    Fixed              operator-(Fixed const &rhs) const;
    Fixed              operator/(Fixed const &rhs) const;
    Fixed              operator*(Fixed const &rhs) const;
    Fixed              &max(Fixed &lhs, Fixed &rhs) const;
    static Fixed const &max(Fixed const &lhs, Fixed const &rhs);
    Fixed              &min(Fixed &lhs, Fixed &rhs) const;
    static Fixed const &min(Fixed const &lhs, Fixed const &rhs);
    Fixed              &operator++(void);
    Fixed              operator++(int);
    Fixed              &operator--(void);
    Fixed              operator--(int);

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