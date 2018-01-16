/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 09:35:23 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/16 13:26:42 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONV_HPP
# define CONV_HPP

# define CHAR 'c'
# define INT 'i'
# define FLOAT 'f'
# define DOUBLE 'd'
# define ERROR -1

# include <iostream>
# include <climits>
# include <cstdlib>
# include <sstream>
# include <stdexcept>

class Conv {
  public:
    Conv(void);
    Conv(Conv const &instance);
    Conv(std::string const &string);
    ~Conv(void);

    Conv    &operator=(Conv const &rhs);
    char    toChar(void) const;
    int     toInt(void) const;
    float   toFloat(void) const;
    double  toDouble(void) const;
    char    getType(void) const;
  protected:
    std::string   _param;
    char          _type;
    char          FindType(std::string const &string) const;
  private:
};

#endif
