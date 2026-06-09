/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 14:45:40 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/09 16:34:39 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>

Base::~Base(){}

Base	*generate(void)
{
	srand(time(0));
	int nb = rand() % 3;
	
	std::cout << "nb = " << nb << std::endl;
	A *a = NULL;
	B *b = NULL;
	C *c = NULL;
	switch (nb)
	{
		case 0:
			return (a); 
		case 1:
			return (b);
		case 2:
			return (c);
	}
}

void	identify(Base *p)
{
	(void)p;
}

void	identify(Base &p)
{
	(void)p;
}
