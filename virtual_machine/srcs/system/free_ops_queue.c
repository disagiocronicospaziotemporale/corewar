/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_ops_queue.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 18:27:21 by acolas            #+#    #+#             */
/*   Updated: 2019/04/21 18:27:22 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

void			free_ops_queue(t_ps_op *ops_queue)
{
	t_ps_op		*prev;

	while (ops_queue)
	{
		prev = ops_queue;
		ops_queue = ops_queue->next;
		free(prev);
	}
}
