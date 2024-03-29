/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AEnv.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 11:44:06 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/14 14:30:28 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AENV_HPP
# define AENV_HPP

# include <iostream>

class AEnv {
  public:
  AEnv(void);
  AEnv(int x, int y);
  AEnv(AEnv const &src);
  virtual ~AEnv();

  AEnv const    &operator=(AEnv const & rdh);
  virtual bool	move(int) = 0;
  bool          colision(AEnv *&elem);
  virtual void  toPrint();
  int		        getX( void ) const;
  int		        getY( void ) const;
  std::string   getForm(void) const;

  protected:
    int _x;
    int _y;
    std::string _form;
};

#endif
