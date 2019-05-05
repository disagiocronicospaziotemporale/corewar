/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_ops_queue.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 18:01:56 by acolas            #+#    #+#             */
/*   Updated: 2019/04/21 18:01:57 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

void		exec_ops_queue(t_vm *vm)
{
	t_ps_op		*prev;

	while (vm->ops_queue)
	{
		prev = vm->ops_queue;
		vm->ops_queue = vm->ops_queue->next;
		prev->op(vm, prev->ps);
		prev->ps->op = NULL;
		free(prev);
	}
}