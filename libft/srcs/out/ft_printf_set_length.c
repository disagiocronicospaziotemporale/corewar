/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_set_length.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 15:21:08 by anrzepec          #+#    #+#             */
/*   Updated: 2019/03/26 15:21:26 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void		set_length(t_fmt_ops *ops)
{
	while (ops->tp->s[ops->tp->index])
	{
		if (!ft_strncmp(SHORT_LENGTH, ops->tp->s + ops->tp->index, 1))
			ops->short_type++;
		else if (!ft_strncmp(LONG_LENGTH, ops->tp->s + ops->tp->index, 1))
			ops->long_type++;
		else if (!ft_strncmp(INTMAX_LENGTH, ops->tp->s + ops->tp->index, 1))
			ops->intmax_type = 1;
		else if (!ft_strncmp(SIZE_T_LENGTH, ops->tp->s + ops->tp->index, 1))
			ops->size_t_type = 1;
		else
			break ;
		ops->tp->index++;
	}
}
