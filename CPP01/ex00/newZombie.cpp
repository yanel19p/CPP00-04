/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 00:30:58 by yaperalt          #+#    #+#             */
/*   Updated: 2026/10/25 14:57:13 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/zombie.hpp"

Zombie* newZombie(std::string name) {
    return(new Zombie(name));
}
