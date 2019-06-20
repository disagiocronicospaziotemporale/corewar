/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 19:22:59 by anrzepec          #+#    #+#             */
/*   Updated: 2019/03/04 19:23:02 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	s1_size;
	char	*dup;

	s1_size = ft_strlen(s1);
	if (!(dup = (char*)malloc(sizeof(char) * (s1_size + 1))))
		return (NULL);
	ft_strcpy(dup, s1);
	return (dup);
}
