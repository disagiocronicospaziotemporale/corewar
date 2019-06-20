/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 17:32:08 by anrzepec          #+#    #+#             */
/*   Updated: 2019/02/26 17:32:10 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstfind(t_list *lst, void *content, int (*cmp)())
{
	while (lst)
	{
		if (cmp && !(*cmp)(lst->content, content))
			return (lst);
		else if (lst->content == content)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
