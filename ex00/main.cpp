/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:40:31 by gaducurt          #+#    #+#             */
/*   Updated: 2026/07/01 15:52:19 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	ScalarConverter converter;
	if (ac != 2)
	{
		std::cout << "need one parameter" << std::endl;
		return (1);
	}
	if (converter.convert(av[1]) == 0)
		return (0);
	else
	{
		std::cout << "wrong input" << std::endl;
		return (1);
	}
	return (0);
}
