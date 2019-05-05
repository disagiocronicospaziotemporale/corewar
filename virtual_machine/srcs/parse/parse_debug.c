/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_debug.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriccard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 15:31:46 by mriccard          #+#    #+#             */
/*   Updated: 2019/04/21 15:34:53 by mriccard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

void			parse_debug(t_vm *vm, char **argv, int i)
{
	if (!ft_strcmp(argv[i], "-debug"))
	{
		if (vm->debug)
			error_exit(vm, "Declare -debug once only");
		if (argv[i + 1])
			vm->debug = ft_atoi(argv[i + 1]);
		else
			error_exit(vm, "No nbr_cycles ./corewar [-debug nbr_cycles]");
		if (vm->debug < 1)
			error_exit(vm, "Declare nbr_cycles greater than 0");
	}
}
