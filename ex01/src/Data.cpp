/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:09:10 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/09 11:33:00 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _name("no_name"){}

Data::Data(const Data &obj)
{
	*this = obj;
}

Data &Data::operator=(const Data &obj)
{
	if (this != &obj)
		_name = obj._name;
	return (*this);
}

Data::~Data(){}

Data::Data(std::string name) : _name(name){}
