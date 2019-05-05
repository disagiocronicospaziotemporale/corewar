/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriccard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 22:47:32 by mriccard          #+#    #+#             */
/*   Updated: 2019/04/11 21:26:18 by mriccard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

void				parse_handler(t_vm *vm)
{
	parse_options(vm);
	parse_create_champ(vm);
	parse_read_champ(vm);
	parse_bytes(vm);
	parse_count_champions(vm);
}
