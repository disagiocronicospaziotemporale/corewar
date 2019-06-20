/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_processes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 17:37:01 by anrzepec            #+#    #+#             */
/*   Updated: 2019/04/17 17:37:02 by anrzepec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

void		free_processes(t_process *processes)
{
	t_process	*prev;

	while (processes)
	{
		prev = processes;
		processes = processes->next;
		free(prev);
	}
}
