/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate_process.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 12:28:34 by acolas            #+#    #+#             */
/*   Updated: 2019/04/16 12:28:35 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

void		duplicate_process(t_vm *vm, t_process *ps, t_process **new_ps)
{
	if (!(*new_ps = (t_process*)malloc(sizeof(t_process))))
		error_exit(vm, "Malloc failed, process duplication.");
	ft_memcpy(*new_ps, ps, sizeof(t_process));
}
