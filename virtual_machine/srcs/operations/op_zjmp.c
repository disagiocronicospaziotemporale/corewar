/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_zjmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriccard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 23:04:41 by mriccard          #+#    #+#             */
/*   Updated: 2019/04/15 02:26:16 by mriccard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

void				op_zjmp(t_vm *vm, t_process *ps)
{
	int				modify;

	if (ps->carry)
	{
		get_next_bytes(vm, ps, &modify, 2);
		modify_pc(ps, modify % IDX_MOD);
	}
	else
		modify_pc(ps, 3);
}
