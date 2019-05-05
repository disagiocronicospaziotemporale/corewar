/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 15:06:04 by acolas            #+#    #+#             */
/*   Updated: 2019/03/05 15:06:05 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*actual;
	t_list	*next;

	if (!alst)
		return ;
	actual = *alst;
	while (actual)
	{
		next = actual->next;
		ft_lstdelone(&actual, del);
		actual = next;
	}
	*alst = NULL;
}