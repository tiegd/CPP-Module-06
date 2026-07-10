/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 14:45:40 by gaducurt          #+#    #+#             */
/*   Updated: 2026/07/10 13:16:37 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>
#include <exception>

Base::~Base(){}

Base	*generate(void)
{
	srand(time(0));
	int nb = rand() % 3;
	
	if (nb == 0)
	{
		Base *a = new A();
		return (a); 
	}
	else if (nb == 1)
	{
		Base *b = new B();
		return (b);
	}
	else
	{
		Base *c = new C();
		return (c);
	}
}

void	identify(Base *p)
{
	
	A *a = dynamic_cast<A *>(p);
	if (a != NULL)
	{
		std::cout << "The object's class is A" << std::endl;
		return;
	}
	B *b = dynamic_cast<B *>(p);
	if (b != NULL)
	{
		std::cout << "The object's class is B" << std::endl;
		return;
	}
	C *c = dynamic_cast<C *>(p);
	if (c != NULL)
	{
		std::cout << "The object's class is C" << std::endl;
		return;
	}
}

void	identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "The object's class is A" << std::endl;
	}
	catch (std::exception &e)
	{}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "The object's class is B" << std::endl;
	}
	catch (std::exception &e)
	{}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "The object's class is C" << std::endl;
	}
	catch (std::exception &e)
	{}
}
