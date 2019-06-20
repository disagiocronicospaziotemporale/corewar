/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 16:52:31 by anrzepec          #+#    #+#             */
/*   Updated: 2019/03/09 17:00:49 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstappend(t_list **lst, t_list *new)
{
	t_list	*list;

	if (lst && (*lst) != NULL)
	{
		list = *lst;
		while (list->next != NULL)
			list = list->next;
		list->next = new;
	}
	else if (lst)
		(*lst) = new;
}
