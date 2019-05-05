/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_st.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriccard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 23:03:58 by mriccard          #+#    #+#             */
/*   Updated: 2019/04/19 15:39:37 by mriccard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

static void			load(t_vm *vm, t_process *ps, int p1, int p2)
{
	vm->memory[return_address(ps, p2)] = (p1 >> 24) & 0xFF;
	vm->memory[return_address(ps, p2 + 1)] = (p1 >> 16) & 0xFF;
	vm->memory[return_address(ps, p2 + 2)] = (p1 >> 8) & 0xFF;
	vm->memory[return_address(ps, p2 + 3)] = p1 & 0xFF;
}

void				op_st(t_vm *vm, t_process *ps)
{
	unsigned char	encoded;
	int				bytes;
	int				p1;
	int				p2;

	modify_pc_tmp(ps, 1);
	encoded = vm->memory[ps->pc_tmp];
	calc_bytes(encoded, 1, &bytes);
	get_next_bytes(vm, ps, &p1, bytes);
	get_value(vm, ps, decode_byte(encoded, 1), &p1);
	calc_bytes(encoded, 2, &bytes);
	get_next_bytes(vm, ps, &p2, bytes);
	if (decode_byte(encoded, 2) == IND_CODE)
		load(vm, ps, p1, p2 % IDX_MOD);
	else if (decode_byte(encoded, 2) == REG_CODE)
		ps->r[get_r(p2)] = p1;
	iterate_pc(ps);
}
