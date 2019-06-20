/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_put.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 14:10:20 by anrzepec          #+#    #+#             */
/*   Updated: 2019/03/25 15:53:20 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void	put_invalid_spec(t_fmt_ops *ops)
{
	if (!ops->tp->s[ops->tp->index])
		return ;
	if (ops->left)
	{
		ft_putchar_fd(ops->tp->s[ops->tp->index], ops->tp->fd);
		padding_with(ops, 1, ' ');
	}
	else if (!ops->zeros)
	{
		padding_with(ops, 1, ' ');
		ft_putchar_fd(ops->tp->s[ops->tp->index], ops->tp->fd);
	}
	else
	{
		padding_with(ops, 1, '0');
		return ;
	}
	ops->tp->index++;
	ops->tp->chrs_written++;
}

static void	put_type(t_fmt_type *types, t_fmt_ops *ops)
{
	int	i;

	i = 0;
	while (types[i].id)
	{
		if (ft_isspace(ops->tp->s[ops->tp->index]))
		{
			i = 0;
			ops->tp->index++;
		}
		else if (!ft_strncmp(types[i].id, ops->tp->s + ops->tp->index, 1))
		{
			ops->type = types[i].id;
			types[i].put_type(ops);
			ops->tp->index++;
			return ;
		}
		else
			i++;
	}
	put_invalid_spec(ops);
}

void		ft_printf_put(t_printf *tp)
{
	t_fmt_ops	ops;

	setup_ops(tp, &ops);
	set_flags(&ops);
	set_width(&ops);
	set_precision(&ops);
	set_length(&ops);
	put_type(g_types, &ops);
}
