/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_check_dump_debug.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriccard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 15:36:37 by mriccard          #+#    #+#             */
/*   Updated: 2019/04/21 16:36:44 by mriccard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

void				parse_check_dump_debug(t_vm *vm)
{
	if (vm->dump && vm->debug)
		error_exit(vm, "You must only use one of either dump or debug");
}
