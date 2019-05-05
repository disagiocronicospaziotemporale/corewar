/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_tools.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsalai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 17:49:30 by vsalai            #+#    #+#             */
/*   Updated: 2019/04/19 14:30:54 by vsalai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "assembler.h"

char		*ft_initline(t_line **line)
{
	if (!(*line = (t_line*)malloc(sizeof(t_line))))
		return (ft_strdup("Failed to malloc s_line struct"));
	ft_bzero(*line, sizeof(t_line));
	return (NULL);
}

void		ft_push_line(t_line *line, t_frame *frame)
{
	t_line	*tmp;

	if (!frame->lines)
		frame->lines = line;
	else
	{
		tmp = frame->lines->last;
		tmp->next = line;
	}
	frame->lines->last = line;
}

static char	*ft_init_label(t_label **label, char *name, int dist, char *str)
{
	if (!(*label = (t_label*)malloc(sizeof(t_label))))
		return (ft_strdup("Failed to malloc label declaration"));
	if (!((*label)->name = name))
	{
		free(*label);
		return (ft_strdup("Failed to malloc label declaration name"));
	}
	(*label)->dist = dist;
	(*label)->next = NULL;
	(*label)->line = str;
	(*label)->used = 0;
	return (NULL);
}

char		*ft_push_decl(char *name, int dist, t_frame **frame)
{
	t_label	*label;
	t_label *tmp;
	char	*ret;

	if ((ret = ft_init_label(&label, ft_strdup(name), dist, NULL)))
		return (ret);
	if (!(*frame)->declare)
		(*frame)->declare = label;
	else
	{
		tmp = (*frame)->declare;
		while (tmp->next)
		{
			if (!ft_strcmp(tmp->name, label->name) ||
				!ft_strcmp(tmp->next->name, label->name))
			{
				ft_free_label(&label);
				return (ft_strdup("Double declaration of label"));
			}
			tmp = tmp->next;
		}
		tmp->next = label;
	}
	return (NULL);
}

char		*ft_push_request(char *name, t_frame **f, char *str, int nb)
{
	t_label	*label;
	t_label *tmp;
	char	*ret;

	if ((ret = ft_init_label(&label, ft_strdup(name), (*f)->bytecount,
			ft_strdup(str))))
		return (ret);
	label->line_nb = nb;
	if (!(*f)->request)
		(*f)->request = label;
	else
	{
		tmp = (*f)->request;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = label;
	}
	return (NULL);
}
