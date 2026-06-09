/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 14:29:07 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/09 09:49:26 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"
#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <climits>

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

void	convertInt(long val)
{
	char	c;
	float	f;
	double	d;

	c = static_cast<char>(val);
	if (val > 32 && val < 127)
		std::cout << "char: " << c;
	else if ((val >= 0 && val <= 32) || val == 127)
		std::cout << "char: Non displayable";
	else if (val > 127 || val < 0)
		std::cout << "char: impossible";
	if (val > INT_MAX || val < INT_MIN)
		std::cout << "\nint: impossible";
	else
		std::cout << "\nint: " << val;
	f = static_cast<float>(val);
	d = static_cast<double>(val);
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "\nfloat: " << f << "f\ndouble: " << d << std::endl;
}

void	convertChar(char val)
{
	int		i;
	float	f;
	double	d;

	i = static_cast<int>(val);
	f = static_cast<float>(val);
	d = static_cast<double>(val);
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "char : " << val << "\nint : " << i << "\nfloat : " << f << "f\ndouble : " << d << std::endl;
}

void	convertFloat(float val)
{
	char	c;
	int		i;
	double	d;

	c = static_cast<char>(val);
	if (val > 32 && val < 127)
		std::cout << "char: " << c;
	else if ((val >= 0 && val <= 32) || val == 127)
		std::cout << "char: Non displayable";
	else
		std::cout << "char: impossible";
	if (val > (float)INT_MAX || val < (float)INT_MIN)
		std::cout << "\nint: impossible";
	else
	{
		i = static_cast<int>(val);	
		std::cout << "\nint: " << i;
	}
	d = static_cast<double>(val);
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "\nfloat : " << val << "f\ndouble : " << d << std::endl;
}

void	convertDouble(double val)
{
	char	c;
	int		i;
	float	f;
	
	c = static_cast<char>(val);
	if (val > 32 && val < 127)
		std::cout << "char: " << c;
	else if ((val >= 0 && val <= 32) || val == 127)
		std::cout << "char: Non displayable";
	else if (val > 127 || val < 0)
		std::cout << "char: impossible";
	if (val > (float)INT_MAX || val < (float)INT_MIN)
		std::cout << "\nint: impossible";
	else
	{
		i = static_cast<int>(val);	
		std::cout << "\nint: " << i;
	}
	f = static_cast<float>(val);
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "\nfloat : " << f << "f\ndouble : " << val << std::endl;
}

bool	isInt(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!std::isdigit(str[i]))
		{
			if (i != 0 && str[i] != '-')
				return (false);
		}
	}
	return (true);
}

bool	isFloat(std::string str)
{
	int point = 0;
	int f = 0;

	for (size_t i = 0; i < str.size(); i++)
	{
		if (!std::isdigit(str[i]))
		{
			if (i == 0 && str[i] == '-')
				continue;
			else if (str[i] == '.' && std::isdigit(str[i + 1]))
				point++;
			else if (str[i] == 'f')
				f++;
			else
				return (false);
		}
	}
	if (point < 2 && f == 1 && str[str.size() - 1] == 'f')
		return (true);
	else
		return (false);
}

bool	isDouble(std::string str)
{
	int point = 0;
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!std::isdigit(str[i]))
		{
			if (i == 0 && str[i] == '-')
				continue;
			else if (str[i] == '.')
				point++;
			else
				return (false);
		}
	}
	if (point > 0 && point < 2 && std::isdigit(str[str.size() - 1]))
		return (true);
	else
		return (false);
}

int ScalarConverter::convert(std::string str)
{
	if (isFloat(str))
	{
		convertFloat(std::strtof(str.c_str(), NULL));
		return (0);
	}
	else if (isDouble(str))
	{
		convertDouble(std::strtod(str.c_str(), NULL));
		return (0);
	}
	else if (isInt(str))
	{
		convertInt(std::atol(str.c_str()));
		return (0);
	}
	else if (str.size() == 1)
	{
		convertChar(str[0]);
		return (0);
	}
	else if (!str.compare("nan") || !str.compare("nanf"))
	{
		std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan"<< std::endl;
		return (0);
	}
	else if (!str.compare("inf") || !str.compare("inff"))
	{
		std::cout << "char: impossible\nint: impossible\nfloat: inff\ndouble: inf"<< std::endl;
		return (0);
	}
	else if (!str.compare("-inf") || !str.compare("-inff"))
	{
		std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf"<< std::endl;
		return (0);
	}
	else
		return (1);
}
