/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 00:27:43 by yaperalt          #+#    #+#             */
/*   Updated: 2026/10/25 14:57:26 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/zombie.hpp"

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << this->name << " got demolished by Rick Grimes!\n";
}

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
