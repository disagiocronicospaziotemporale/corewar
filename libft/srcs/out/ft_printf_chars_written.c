/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_chars_written.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 18:55:52 by acolas            #+#    #+#             */
/*   Updated: 2019/03/26 14:48:51 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	ft_printf_chars_written(t_fmt_ops *ops)
{
	int	*n;

	n = va_arg(*(ops->tp->params), int*);
	if (n)
		*n = ops->tp->chrs_written;
}
