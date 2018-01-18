/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 17:22:44 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/19 00:24:16 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
  public:
    MutantStack(void) : std::stack<T>() {}
    ~MutantStack(void){}
    MutantStack(MutantStack<T> const &instance):std::stack<T>(instance){}
    using     std::stack<T>::operator=;
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator	begin() { return this->c.begin(); }
    iterator	end() { return this->c.end(); }
};

#endif
