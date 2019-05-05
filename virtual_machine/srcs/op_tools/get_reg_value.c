/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_reg_value.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriccard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 19:58:20 by mriccard          #+#    #+#             */
/*   Updated: 2019/04/19 15:00:35 by mriccard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

/*
** Function fetches correct value based on DIR, IND, REG.
*/

void	get_reg_value(t_process *ps, unsigned char encoded, int *parameter)
{
	if (encoded == REG_CODE)
		*parameter = ps->r[get_r(*parameter % 256)];
}
