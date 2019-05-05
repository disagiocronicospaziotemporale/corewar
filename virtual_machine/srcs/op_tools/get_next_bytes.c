/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_bytes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriccard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 21:19:36 by mriccard          #+#    #+#             */
/*   Updated: 2019/04/14 23:59:36 by mriccard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

/*
** n bytes from position pc + 1 will be stored in value
*/

void			get_next_bytes(t_vm *vm, t_process *ps, int *value, int n)
{
	int		val;

	val = 0;
	while (n--)
	{
		modify_pc_tmp(ps, 1);
		val <<= 8;
		val |= vm->memory[ps->pc_tmp];
	}
	*value = val;
}
