/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_names.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 17:36:47 by acolas            #+#    #+#             */
/*   Updated: 2019/04/17 17:36:49 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

void		free_names(t_name *names)
{
	t_name		*prev;

	while (names)
	{
		prev = names;
		names = names->next;
		free(prev);
	}
}
