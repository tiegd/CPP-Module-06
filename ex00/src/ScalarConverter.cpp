/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 14:29:07 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/05 17:10:48 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"
#include <cctype>
#include <cstdlib>

void	convertInt(int val);
void	convertChar(char val);
void	convertFloat(float val);
void	convertDouble(double val);

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
	(void) obj;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &obj)
{
	(void) obj;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
}

void ScalarConverter::convert(std::string str)
{
	// char	c;
	// int		i;
	// float	f;
	// double	d;

	// atoi(str), atof(str), 

	if (str.size() == 1)
	{
		// if (!std::isdigit(str[0]))
		// 	c = str[0];
		// else
		// 	i = std::atoi(str.c_str());
		if (!std::isdigit(str[0]))
			convertChar(str[0]);
		else
			convertInt(std::atoi(str.c_str()));
	}
	else if (std::atoi(str.c_str()))
		convertInt(std::atoi(str.c_str()));
		// i = std::atoi(str.c_str());
	else if (std::atof(str.c_str()))
		convertFloat(std::atof(str.c_str()));
		// f = std::atof(str.c_str());
	else if(std::strtod(str.c_str(), NULL))
		convertDouble(std::strtod(str.c_str(), NULL));
		// d = std::strtod(str.c_str(), NULL);
	// std::cout << "char : " << c << "\nint : " << i << "\nfloat : " << f << "\ndouble :" << d << std::endl;
}

void	convertInt(int val)
{
	char	c;
	float	f;
	double	d;

	c = static_cast<char>(val);
	f = static_cast<float>(val);
	d = static_cast<double>(val);
	std::cout << "char : " << c << "\nint : " << val << "\nfloat : " << f << "\ndouble : " << d << std::endl;
}

void	convertChar(char val)
{
	int		i;
	float	f;
	double	d;

	i = static_cast<int>(val);
	f = static_cast<float>(val);
	d = static_cast<double>(val);
	std::cout << "char : " << val << "\nint : " << i << "\nfloat : " << f << "\ndouble : " << d << std::endl;
}

void	convertFloat(float val)
{
	char	c;
	int		i;
	double	d;

	c = static_cast<char>(val);
	i = static_cast<int>(val);
	d = static_cast<double>(val);
	std::cout << "char : " << c << "\nint : " << i << "\nfloat : " << val << "\ndouble : " << d << std::endl;
}

void	convertDouble(double val)
{
	char	c;
	int		i;
	float	f;
	
	c = static_cast<char>(val);
	i = static_cast<int>(val);
	f = static_cast<float>(val);
	std::cout << "char : " << c << "\nint : " << i << "\nfloat : " << f << "\ndouble : " << val << std::endl;
}

/*
- non displayable
- impossible
- nan / nanf
- -inf / +inf
- -inff / +inff
*/
