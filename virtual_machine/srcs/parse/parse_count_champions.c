/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_count_champions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriccard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 21:26:27 by mriccard          #+#    #+#             */
/*   Updated: 2019/04/13 19:31:46 by mriccard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

void				parse_count_champions(t_vm *vm)
{
	int				largest_num;
	t_champ			*champ;
	int				i;

	i = 0;
	largest_num = 0;
	champ = vm->champ;
	while (champ)
	{
		i++;
		if (champ->number > largest_num)
			largest_num = champ->number;
		champ = champ->next;
	}
	if (i > MAX_PLAYERS)
		error_exit(vm, "Too many Champions");
}
