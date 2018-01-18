/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 13:44:52 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/18 23:34:32 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <numeric>
# include <algorithm>
# include <stdexcept>
# include <vector>

class Span {
  public:
    Span(unsigned int x = 1);
    Span(Span const &instance);
    ~Span(void);

    Span    &operator=(Span const &rhs);
    void    addNumber(int n);
    int     shortestSpan(void) const;
    int     longestSpan(void) const;
  private:
    Span(void);
    std::vector<int>  _store;
};

#endif
