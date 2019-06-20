/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_setup_ops.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 18:12:30 by anrzepec          #+#    #+#             */
/*   Updated: 2019/03/25 18:13:15 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void		setup_ops(t_printf *tp, t_fmt_ops *ops)
{
	ops->tp = tp;
	ops->type = NULL;
	ops->convert = 0;
	ops->zeros = 0;
	ops->left = 0;
	ops->sign = 0;
	ops->spaces = 0;
	ops->width = 0;
	ops->precision = 0;
	ops->short_type = 0;
	ops->long_type = 0;
	ops->intmax_type = 0;
	ops->size_t_type = 0;
}
