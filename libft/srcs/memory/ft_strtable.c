/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtable.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:41:14 by anrzepec          #+#    #+#             */
/*   Updated: 2019/04/11 10:18:43 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strtable(size_t row_size, size_t col_size)
{
	char	**res;
	size_t	i;

	if (!(res = (char**)malloc(sizeof(char*) * (row_size + 1))))
		return (NULL);
	i = 0;
	while (i < row_size)
	{
		if (!(res[i] = ft_strnew(col_size)))
		{
			ft_strdel_table(res);
			return (NULL);
		}
		i++;
	}
	res[i] = NULL;
	return (res);
}
