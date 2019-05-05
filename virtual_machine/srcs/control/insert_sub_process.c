/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_sub_process.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 12:28:53 by acolas            #+#    #+#             */
/*   Updated: 2019/04/16 12:28:56 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

void			insert_sub_process(t_vm *vm, t_process *new_ps)
{
	t_process	*ps;
	t_process	*prev;

	ps = vm->process;
	while (ps)
	{
		if (ps->number == new_ps->number)
		{
			while (ps && ps->number == new_ps->number)
			{
				prev = ps;
				ps = ps->next;
			}
			new_ps->next = prev->next;
			prev->next = new_ps;
			return ;
		}
		ps = ps->next;
	}
}
