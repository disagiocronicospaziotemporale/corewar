/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_value.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriccard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 03:07:35 by mriccard          #+#    #+#             */
/*   Updated: 2019/04/19 15:02:22 by mriccard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

/*
** Function fetches correct value based on DIR, IND, REG.
*/

void	get_value(t_vm *vm, t_process *ps, unsigned char encoded,
													int *parameter)
{
	if (encoded == REG_CODE)
		*parameter = ps->r[get_r(*parameter % 256)];
	if (encoded == IND_CODE)
		*parameter = vm->memory[return_address(ps, *parameter)];
}
