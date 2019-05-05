/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 14:40:23 by acolas            #+#    #+#             */
/*   Updated: 2019/03/05 14:40:29 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstcpy(void *content, size_t content_size)
{
	t_list	*res;

	if (!(res = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	res->content = content;
	res->content_size = content_size;
	res->next = NULL;
	return (res);
}
