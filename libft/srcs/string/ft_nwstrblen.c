/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nwstrblen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 13:01:08 by anrzepec          #+#    #+#             */
/*   Updated: 2019/03/26 12:53:52 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_nwstrblen(const wchar_t *s, size_t n)
{
	size_t	size;
	long	i;

	i = (long)n;
	size = 0;
	while (*s != L'\0')
	{
		i -= ft_wcharlen(*s);
		if (i < 0)
			break ;
		size += ft_wcharlen(*s);
		s++;
	}
	return (size);
}
