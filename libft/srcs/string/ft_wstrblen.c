/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrblen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 12:57:07 by acolas            #+#    #+#             */
/*   Updated: 2019/03/23 13:06:10 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_wstrblen(const wchar_t *s)
{
	size_t	size;
	size_t	i;

	i = 0;
	size = 0;
	while (s[i] != L'\0')
	{
		size += ft_wcharlen(s[i]);
		i++;
	}
	return (size);
}
