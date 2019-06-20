/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 22:04:52 by anrzepec          #+#    #+#             */
/*   Updated: 2019/02/26 22:05:04 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstsort(t_list **lst, int (*cmp)())
{
	t_list	*current;
	int		change;
	void	*temp;

	if (lst && *lst)
	{
		change = 1;
		while (change)
		{
			change = 0;
			current = *lst;
			while (current->next)
			{
				if ((*cmp)(current->content, current->next->content) > 0)
				{
					temp = current->content;
					current->content = current->next->content;
					current->next->content = temp;
					change = 1;
				}
				current = current->next;
			}
		}
	}
}
