/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 10:59:15 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/09 14:38:59 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int	main()
{
	Data	data;
	
	Data	*originalPtr = &data;
	
	uintptr_t raw = Serializer::serialize(originalPtr);
	
	Data	*deseializePtr = Serializer::deserialize(raw);

	std::cout << "data._name = " << data.getName() <<"\nptr data = " << &data << "\n" << std::endl;
	std::cout << "originalPtr = " << originalPtr << std::endl;
	std::cout << "raw = " << raw << "\n" << std::endl;
	std::cout << "deseializePtr._name = " << deseializePtr->getName() <<"\nptr deseializePtr = " << deseializePtr << std::endl;

	return (0);
}
