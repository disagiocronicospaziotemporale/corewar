/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 19:19:36 by acolas            #+#    #+#             */
/*   Updated: 2019/03/04 19:19:38 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	t_uchar	*d;
	t_uchar	*s;

	d = (t_uchar*)dst;
	s = (t_uchar*)src;
	while (n--)
	{
		*d++ = *s;
		if (*s++ == (t_uchar)c)
			return (d);
	}
	return (NULL);
}
