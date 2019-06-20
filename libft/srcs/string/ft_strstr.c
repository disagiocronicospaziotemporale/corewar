/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 19:24:16 by anrzepec          #+#    #+#             */
/*   Updated: 2019/03/04 19:24:17 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t size;
	size_t i;
	size_t j;

	size = ft_strlen(needle);
	if (!size)
		return ((char *)haystack);
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (j == size - 1)
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
