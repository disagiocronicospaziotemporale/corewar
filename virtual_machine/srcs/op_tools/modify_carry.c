/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify_carry.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriccard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 13:05:55 by mriccard          #+#    #+#             */
/*   Updated: 2019/04/18 15:02:22 by mriccard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

void				modify_carry(t_process *ps, int value)
{
	if (!value)
		ps->carry = 1;
	else
		ps->carry = 0;
}
