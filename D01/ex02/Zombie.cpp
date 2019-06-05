/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <ppreez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:30:59 by ppreez            #+#    #+#             */
/*   Updated: 2019/06/05 10:51:55 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(char *z_type, char *z_name){
	type = z_type;
	name = z_name;
}

Zombie::~Zombie() {
	std::cout << "<" << name << " (" << type << ")> * Collapses, dead *" << std::endl;
}

void Zombie::announce() {
	std::cout << "<" << name << " (" << type << ")> * Shambles around *" << std::endl;
}