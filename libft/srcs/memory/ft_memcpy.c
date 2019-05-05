/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 19:20:12 by acolas            #+#    #+#             */
/*   Updated: 2019/03/04 19:20:13 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const t_uchar	*s;
	t_uchar			*d;

	s = (t_uchar*)src;
	d = (t_uchar*)dst;
	while (n--)
		*d++ = *s++;
	return (dst);
}
