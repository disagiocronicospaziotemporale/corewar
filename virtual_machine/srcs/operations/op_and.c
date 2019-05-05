/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_and.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriccard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 23:02:33 by mriccard          #+#    #+#             */
/*   Updated: 2019/04/19 15:10:35 by mriccard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

void				op_and(t_vm *vm, t_process *ps)
{
	unsigned char	encoded;
	int				bytes;
	int				p1;
	int				p2;
	int				p3;

	modify_pc_tmp(ps, 1);
	encoded = vm->memory[ps->pc_tmp];
	calc_bytes(encoded, 1, &bytes);
	get_next_bytes(vm, ps, &p1, bytes);
	get_value(vm, ps, decode_byte(encoded, 1), &p1);
	calc_bytes(encoded, 2, &bytes);
	get_next_bytes(vm, ps, &p2, bytes);
	get_value(vm, ps, decode_byte(encoded, 2), &p2);
	get_next_bytes(vm, ps, &p3, 1);
	ps->r[get_r(p3)] = p1 & p2;
	modify_carry(ps, ps->r[get_r(p3)]);
	iterate_pc(ps);
}
