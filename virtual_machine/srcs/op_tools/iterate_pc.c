/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterate_pc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriccard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 00:20:01 by mriccard          #+#    #+#             */
/*   Updated: 2019/04/15 00:26:44 by mriccard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

/*
** Moves pc ahead of last byte by 1.
*/

void				iterate_pc(t_process *ps)
{
	ps->pc = ps->pc_tmp;
	modify_pc(ps, 1);
}
