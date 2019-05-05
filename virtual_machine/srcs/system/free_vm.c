/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_virtual_machine.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriccard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 13:55:52 by mriccard          #+#    #+#             */
/*   Updated: 2019/04/22 13:32:42 by mriccard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

void				free_vm(t_vm *vm)
{
	ft_printf(SHOW_CURSOR);
	free_names(vm->name);
	free_champs(vm->champ);
	free_processes(vm->process);
	free_ops_queue(vm->ops_queue);
}
