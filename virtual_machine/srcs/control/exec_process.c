/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_process.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 17:44:02 by anrzepec          #+#    #+#             */
/*   Updated: 2019/04/21 17:44:03 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

void		exec_process(t_vm *vm, t_process *ps)
{
	ps->pc_tmp = ps->pc;
	save_op(ps, (int)vm->memory[ps->pc]);
}
