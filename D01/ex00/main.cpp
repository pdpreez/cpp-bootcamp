/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <ppreez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:46:15 by ppreez            #+#    #+#             */
/*   Updated: 2019/06/05 10:03:58 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void ponyOnTheStack() {
	std::cout << "Creating stack" << std::endl;
	Pony stack = Pony();
	stack.hop();
}

void ponyOnTheHeap() {
	std::cout << "Creating heap" << std::endl;
	Pony *heap = new Pony();
	heap->hop();
	delete heap;
}

int main(void) {
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}