/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmerge.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 18:00:48 by anrzepec            #+#    #+#             */
/*   Updated: 2019/02/26 18:00:50 by anrzepec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstmerge(t_list **lst1, t_list *lst2)
{
	t_list	*list;

	list = *lst1;
	if (lst1 && list)
	{
		while (list->next != NULL)
			list = list->next;
		list->next = lst2;
	}
	else
		(*lst1) = lst2;
}
