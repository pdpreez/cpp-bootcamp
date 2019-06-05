/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <ppreez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:31:27 by ppreez            #+#    #+#             */
/*   Updated: 2019/06/05 10:56:42 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT
#define ZOMBIEEVENT

#include "Zombie.hpp"

class ZombieEvent
{
	public:
		Zombie *newZombie(std::string name);
		void randomChump(std::string name);
};

#endif