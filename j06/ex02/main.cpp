/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 16:42:19 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/16 17:20:34 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base {
  public:
    virtual ~Base(void);
};

class A : public Base {};
class B : public Base {};
class C : public Base {};


Base::~Base(void) {}

Base * generate(void) {
  int check = rand() % 3;
  Base *d;

  if (check == 0) {
    d = new A();
  }
  else if (check == 1) {
    d = new B();
  }
  else
    d = new C();
  return d;
}

static void	 identify_from_pointer(Base *p)
{
	A *a = dynamic_cast<A *>(p);

	if (a)
		std::cout << "A" << std::endl;
	else if (B *b = dynamic_cast<B *>(p)) {
    std::cout << "B" << std::endl;
  }
	else
		std::cout << "C" << std::endl;
}

static void	 identify_from_reference(Base &p)
{
	if (dynamic_cast<A *>(&p) != NULL)
    std::cout << "A" << std::endl;
  else if (dynamic_cast<B *>(&p) != NULL)
    std::cout << "B" << std::endl;
  else if (dynamic_cast<C *>(&p) != NULL)
    std::cout << "C" << std::endl;
}

int main(void)
{
  srand(time(NULL));
	Base *b;

	for (int i = 0; i < 5; i++)
	{
		b = generate();
		std::cout << "ref: ";
		identify_from_reference(*b);
		std::cout << "ptr: ";
		identify_from_pointer(b);
		delete b;
	}
  return 0;
}
