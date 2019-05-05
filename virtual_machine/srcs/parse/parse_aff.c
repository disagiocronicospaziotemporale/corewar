/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_aff.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriccard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 15:32:45 by mriccard          #+#    #+#             */
/*   Updated: 2019/04/21 15:33:37 by mriccard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

void			parse_aff(t_vm *vm, char **argv, int i)
{
	if (!ft_strcmp(argv[i], "-a"))
		vm->aff = 1;
	if (!ft_strcmp(argv[i], "-d"))
		vm->affd = 1;
	if (!ft_strcmp(argv[i], "-x"))
		vm->affx = 1;
	if (!ft_strcmp(argv[i], "-X"))
		vm->affx2 = 1;
}
