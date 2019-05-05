/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 10:52:39 by acolas            #+#    #+#             */
/*   Updated: 2019/03/24 16:51:59 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

t_fmt			g_fmts[] =
{
	{PUT_ID, &ft_printf_put},
	{COLORS_ID, &ft_printf_colors},
	{FD_ID, &ft_printf_fd},
	{NULL, NULL}
};

static t_fmt	*get_formatter(t_printf *tp)
{
	int		i;

	i = 0;
	while (g_fmts[i].put)
	{
		if (!ft_strncmp(g_fmts[i].id, tp->s + tp->index, 1))
			return (&g_fmts[i]);
		i++;
	}
	return (NULL);
}

int				ft_printf_parse(t_printf *tp)
{
	t_fmt	*tf;
	int		i;

	tp->index = 0;
	i = 0;
	while (tp->s[tp->index])
	{
		if ((tf = get_formatter(tp)))
		{
			ft_putnstr_fd(&tp->s[i], tp->fd, tp->index - i);
			tp->chrs_written += tp->index - i;
			tp->index++;
			tf->put(tp);
			i = tp->index;
		}
		else
			tp->index++;
	}
	ft_putnstr_fd(&tp->s[i], tp->fd, tp->index - i);
	tp->chrs_written += tp->index - i;
	if (tp->exit != -1)
		tp->exit = tp->chrs_written;
	return (tp->exit);
}