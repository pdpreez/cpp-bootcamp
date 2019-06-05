/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <ppreez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:31:08 by ppreez            #+#    #+#             */
/*   Updated: 2019/06/05 10:48:42 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
#define ZOMBIE

class Zombie
{
	public:
		char *type;
		char *name;
		Zombie(char *type, char *name);
		~Zombie();
		void announce();	
};

#endif ZOMBIE