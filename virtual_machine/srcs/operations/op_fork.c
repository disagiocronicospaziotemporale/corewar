/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_fork.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriccard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 23:02:44 by mriccard          #+#    #+#             */
/*   Updated: 2019/04/19 15:10:40 by mriccard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

void				op_fork(t_vm *vm, t_process *ps)
{
	t_process		*new_ps;
	int				offset;

	get_next_bytes(vm, ps, &offset, 2);
	duplicate_process(vm, ps, &new_ps);
	insert_sub_process(vm, new_ps);
	get_address(ps, offset % IDX_MOD, &new_ps->pc);
	new_ps->sleep_cycles = 0;
	new_ps->op = NULL;
	iterate_pc(ps);
}
