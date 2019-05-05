/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_set_flags.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 12:49:46 by acolas            #+#    #+#             */
/*   Updated: 2019/03/26 15:22:20 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void		set_flags(t_fmt_ops *ops)
{
	while (ops->tp->s[ops->tp->index])
	{
		if (!ft_strncmp(CONVERT_FLAG, ops->tp->s + ops->tp->index, 1))
			ops->convert = 1;
		else if (!ft_strncmp(ZEROS_FLAG, ops->tp->s + ops->tp->index, 1))
			ops->zeros = 1;
		else if (!ft_strncmp(LEFT_FLAG, ops->tp->s + ops->tp->index, 1))
			ops->left = 1;
		else if (!ft_strncmp(SIGN_FLAG, ops->tp->s + ops->tp->index, 1))
			ops->sign = 1;
		else if (!ft_strncmp(SPACES_FLAG, ops->tp->s + ops->tp->index, 1))
			ops->spaces = 1;
		else
			break ;
		ops->tp->index++;
	}
}