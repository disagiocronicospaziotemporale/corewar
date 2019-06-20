/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_process.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 14:06:06 by anrzepec          #+#    #+#             */
/*   Updated: 2019/04/21 21:19:28 by mriccard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

static void		copy_program(t_vm *vm, t_champ *champ, size_t pc)
{
	int			i;

	i = 0;
	while (i < champ->prog_size)
	{
		vm->memory[pc + i] = champ->bytes[i];
		i++;
	}
}

static void		append_process(t_vm *vm, t_process *ps)
{
	t_process	*head;

	head = vm->process;
	while (vm->process->next)
		vm->process = vm->process->next;
	ps->id = vm->process->id + 1;
	vm->process->next = ps;
	vm->process = head;
}

static void		add_process(t_vm *vm, t_champ *champ, size_t pc)
{
	t_process	*ps;

	if (!(ps = (t_process*)malloc(sizeof(t_process))))
		error_exit(vm, "Malloc failed, process creation.");
	ft_bzero(ps, sizeof(t_process));
	ps->number = champ->number;
	ps->name = champ->name;
	ps->r[get_r(1)] = ps->number;
	ps->pc = pc;
	if (vm->process)
		append_process(vm, ps);
	else
	{
		ps->id = 1;
		vm->process = ps;
	}
}

void			load_process(t_vm *vm, t_champ *champ, size_t pc)
{
	add_process(vm, champ, pc);
	copy_program(vm, champ, pc);
}
