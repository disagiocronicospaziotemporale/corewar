/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 13:35:37 by acolas            #+#    #+#             */
/*   Updated: 2019/04/03 13:35:55 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isnumber(char *str)
{
	int		i;

	i = 0;
	if (*str == '+' || *str == '-')
		i++;
	while (str[i])
		if (!ft_isdigit(str[i++]))
			return (0);
	if (!i || (i == 1 && (str[0] == '+' || str[0] == '-')))
		return (0);
	return (1);
}