/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_options.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriccard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 15:05:21 by mriccard          #+#    #+#             */
/*   Updated: 2019/04/21 16:03:15 by mriccard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

void				parse_options(t_vm *vm)
{
	int				i;
	char			**argv;

	i = 1;
	argv = vm->argv;
	while (argv[i])
	{
		parse_dump(vm, argv, i);
		parse_debug(vm, argv, i);
		parse_num(vm, argv, i);
		parse_aff(vm, argv, i);
		i++;
	}
	parse_check_dump_debug(vm);
}
