/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decode_byte.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriccard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 00:09:55 by mriccard          #+#    #+#             */
/*   Updated: 2019/04/14 22:13:05 by mriccard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

char				decode_byte(unsigned char encoded, int pair)
{
	if (pair == 2)
		encoded <<= 2;
	if (pair == 3)
		encoded <<= 4;
	if (pair == 4)
		encoded <<= 6;
	encoded >>= 6;
	return (encoded);
}
