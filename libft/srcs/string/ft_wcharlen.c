/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcharlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 12:52:50 by acolas            #+#    #+#             */
/*   Updated: 2019/03/26 14:12:23 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wcharlen(wchar_t c)
{
	unsigned int	value;

	value = (unsigned int)c;
	if (value <= 0x7F)
		return (1);
	if (value <= 0x7FF)
		return (2);
	if (value <= 0xFFFF)
	{
		if (value >= 0xD800 && value <= 0xDBFF)
			return (0);
		if (value >= 0xDC00 && value <= 0xDFFF)
			return (0);
		return (3);
	}
	if (value <= 0x10FFFF)
		return (4);
	return (0);
}
