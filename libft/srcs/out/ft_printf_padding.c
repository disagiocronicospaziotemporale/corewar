/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_padding.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 14:45:40 by anrzepec          #+#    #+#             */
/*   Updated: 2019/03/25 14:20:43 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	padding(t_fmt_ops *ops, int out, size_t param_size, char value)
{
	if (out > (int)param_size)
	{
		out -= param_size;
		while (out-- > 0)
		{
			ft_putchar_fd(value, ops->tp->fd);
			ops->tp->chrs_written++;
		}
	}
}

void	padding_with(t_fmt_ops *ops, size_t param_size, char value)
{
	padding(ops, ops->width, param_size, value);
}

void	padding_with_prec(t_fmt_ops *ops,
								size_t param_size, char value)
{
	padding(ops, ops->precision, param_size, value);
}

void	add_padding(t_fmt_ops *ops, size_t param_size)
{
	if (ops->zeros && !ops->left)
		padding_with(ops, param_size, '0');
	else
		padding_with(ops, param_size, ' ');
}
