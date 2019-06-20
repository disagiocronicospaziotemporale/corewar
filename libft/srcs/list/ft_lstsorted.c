/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 16:50:09 by anrzepec          #+#    #+#             */
/*   Updated: 2019/03/30 15:56:42 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsorted(t_list *lst, int (*cmp)())
{
	if (!lst)
		return (1);
	while (lst->next)
	{
		if (cmp(lst->content, lst->next->content) > 0)
			return (0);
		lst = lst->next;
	}
	return (1);
}
