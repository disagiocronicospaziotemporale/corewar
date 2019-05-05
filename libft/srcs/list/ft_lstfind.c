/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 17:32:08 by acolas            #+#    #+#             */
/*   Updated: 2019/02/26 17:32:10 by acolas           ###   ########.fr       */
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
