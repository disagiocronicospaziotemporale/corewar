/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 13:29:25 by anrzepec          #+#    #+#             */
/*   Updated: 2019/03/05 13:29:26 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	count;

	if (!s || !(result = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	count = 0;
	while (count < len)
	{
		result[count] = s[start + count];
		count++;
	}
	result[count] = '\0';
	return (result);
}
