/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bytecode2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsalai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 21:49:31 by vsalai            #+#    #+#             */
/*   Updated: 2019/04/21 21:21:01 by vsalai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "assembler.h"

int		ft_push_bytecode(t_list **bytecode, char c)
{
	t_list	*tmp;
	t_list	*new;

	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (0);
	new->content = ft_strdup(&c);
	new->content_size = 1;
	new->next = NULL;
	tmp = *bytecode;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
		*bytecode = new;
	return (1);
}

int		ft_fill_dist(t_label *req, t_label *first, t_error **error)
{
	t_label	*decl;
	int		ret;

	ret = 0;
	while (req)
	{
		decl = first;
		while (decl)
		{
			if (!ft_strcmp(req->name, decl->name))
			{
				req->dist = decl->dist - req->dist;
				break ;
			}
			decl = decl->next;
		}
		if (!decl)
			ret += ft_error(ft_strdup(req->line),
				ft_strdup("Label requested not declared"),
				req->line_nb, error);
		if (ret > 19)
			return (ret);
		req = req->next;
	}
	return (ret);
}
