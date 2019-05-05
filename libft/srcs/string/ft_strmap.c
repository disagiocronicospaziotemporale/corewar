/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 13:00:31 by acolas            #+#    #+#             */
/*   Updated: 2019/03/05 13:00:32 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*res;
	unsigned int	i;

	if (!s || !(res = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(s[i]);
		i++;
	}
	return (res);
}
