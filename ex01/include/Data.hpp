/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:09:05 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/09 11:21:55 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DATA__
#define __DATA__

#include <string>

class Data
{
	private:
		std::string	_name;
	public:
		Data();
		Data(const Data &obj);
		Data &operator=(const Data &obj);
		~Data();
		Data(std::string name);
};

#endif
