/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_bytes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriccard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 22:10:52 by mriccard          #+#    #+#             */
/*   Updated: 2019/04/14 22:16:11 by mriccard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

void				calc_bytes(unsigned char encoded, int pair, int *bytes)
{
	*bytes = 0;
	if (decode_byte(encoded, pair) == REG_CODE)
		*bytes = 1;
	if (decode_byte(encoded, pair) == DIR_CODE)
		*bytes = 4;
	if (decode_byte(encoded, pair) == IND_CODE)
		*bytes = 2;
}
