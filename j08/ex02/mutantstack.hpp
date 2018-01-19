/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 17:22:44 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/19 16:02:18 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		class iterator {

			public:
				MutantStack<T>   &_instance;
				size_t        	_i;
				iterator(MutantStack &instance, size_t i);
				~iterator();
				iterator  &operator=(iterator const &rhs);
				iterator  &operator++(void);
				iterator  operator++(int);
				iterator  &operator--(void);
				iterator  operator--(int);
				T const		&operator*();
				bool      operator==(iterator const &rhs);
				bool      operator!=(iterator const &rhs);
				bool      operator<=(iterator const &rhs);
				bool      operator<(iterator const &rhs);
				bool      operator>=(iterator const &rhs);
				bool      operator>(iterator const &rhs);
		};
		iterator      begin(void) {
			return MutantStack<T>::iterator(*this, 0);
		}
		iterator      end(void) {
			return MutantStack<T>::iterator(*this, this->size());
		}
		 T const			&operator[](size_t i);
};

#endif
