/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_bytes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 12:21:06 by acolas            #+#    #+#             */
/*   Updated: 2019/04/20 12:21:10 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

void		load_bytes(t_vm *vm, t_process *ps, int reg, int start)
{
	int		value;
	int		i;

	i = 0;
	value = 0;
	while (i < REG_SIZE)
	{
		value <<= 8;
		value |= vm->memory[return_address(ps, start + i)];
		i++;
	}
	ps->r[get_r(reg)] = value;
}
