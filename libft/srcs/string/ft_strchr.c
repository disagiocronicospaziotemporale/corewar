/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 19:22:18 by acolas            #+#    #+#             */
/*   Updated: 2019/03/04 19:22:19 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *out;

	if (!s)
		return (NULL);
	out = (char *)s;
	while (*out)
	{
		if (*out == (char)c)
			return (out);
		out++;
	}
	if (*out == '\0' && (char)c == '\0')
		return (out);
	return (NULL);
}
