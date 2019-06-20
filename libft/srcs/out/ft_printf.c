/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 10:33:48 by anrzepec          #+#    #+#             */
/*   Updated: 2019/03/25 13:52:44 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static t_printf	setup(const char *s, va_list *params)
{
	t_printf	tp;

	tp.s = s;
	tp.params = params;
	tp.index = 0;
	tp.fd = 1;
	tp.chrs_written = 0;
	tp.exit = 0;
	return (tp);
}

int				ft_printf(const char *s, ...)
{
	t_printf	tp;
	va_list		params;
	int			result;

	if (!s)
		return (-1);
	va_start(params, s);
	tp = setup(s, &params);
	result = ft_printf_parse(&tp);
	va_end(params);
	return (result);
}
