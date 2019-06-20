/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 19:20:12 by anrzepec          #+#    #+#             */
/*   Updated: 2019/03/04 19:20:13 by anrzepec         ###   ########.fr       */
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
