/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriccard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 23:01:23 by mriccard          #+#    #+#             */
/*   Updated: 2019/04/19 15:41:05 by mriccard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

void				op_add(t_vm *vm, t_process *ps)
{
	int				r1;
	int				r2;
	int				r3;

	modify_pc_tmp(ps, 1);
	get_next_bytes(vm, ps, &r1, 1);
	get_next_bytes(vm, ps, &r2, 1);
	get_next_bytes(vm, ps, &r3, 1);
	ps->r[get_r(r3)] = ps->r[get_r(r1)] + ps->r[get_r(r2)];
	iterate_pc(ps);
	modify_carry(ps, ps->r[get_r(r3)]);
}
