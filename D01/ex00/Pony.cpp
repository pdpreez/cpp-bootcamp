/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <ppreez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:46:35 by ppreez            #+#    #+#             */
/*   Updated: 2019/06/05 10:03:31 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony() {
	std::cout << "* A wonderful new baby pony is born *" << std::endl;
}

Pony::~Pony() {
	std::cout << "* Explodes in a shower of gore and viscera * " << std::endl;
}

void Pony::hop() {
	std::cout << "* Hops around a little *" << std::endl;
}