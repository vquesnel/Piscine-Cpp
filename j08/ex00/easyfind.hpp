/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 12:55:03 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/18 13:44:30 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <sstream>

template<typename T>
int   easyfind(T &container, int x) {
    typename T::const_iterator  start;
    typename T::const_iterator  end = container.end();

    for(start = container.begin(); start != end;  start++) {
      if (*start == x) {
        return *start;
      }
    }
    std::stringstream ss;
    ss << "No occurence of " << x << " found in " <<  __PRETTY_FUNCTION__
    << " container";
    throw std::runtime_error(ss.str());
    // throw std::runtime_error("No occurence found.");
}
#endif
