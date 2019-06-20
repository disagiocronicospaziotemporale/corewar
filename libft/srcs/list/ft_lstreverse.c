/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 16:52:43 by anrzepec          #+#    #+#             */
/*   Updated: 2019/02/26 16:52:45 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstreverse(t_list **lst)
{
	t_list	*next;
	t_list	*prev;
	t_list	*actual;

	if (lst)
	{
		actual = *lst;
		prev = NULL;
		while (actual)
		{
			next = actual->next;
			actual->next = prev;
			prev = actual;
			actual = next;
		}
		*lst = prev;
	}
}
