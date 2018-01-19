/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 12:55:03 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/19 15:15:13 by vquesnel         ###   ########.fr       */
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
    typename T::const_iterator it = find(container.begin(), container.end(), x);
    if (it != container.end()) {
      return *it;
    }
    std::stringstream ss;
    ss << "No occurence of " << x << " found in " <<  __PRETTY_FUNCTION__
    << " container";
    throw std::runtime_error(ss.str());
}
#endif
