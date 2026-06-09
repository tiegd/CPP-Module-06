/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 14:44:59 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/09 15:06:27 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BASE__
#define __BASE__

class Base
{
	public:
        virtual ~Base();
};

#endif

Base    *generate(void);
void    identify(Base *p);
void    identify(Base &p);
