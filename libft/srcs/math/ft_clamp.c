/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clamp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 13:04:43 by anrzepec            #+#    #+#             */
/*   Updated: 2019/03/25 13:06:02 by anrzepec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_clamp(int a, int min, int max)
{
	if (a < min)
		a = min;
	else if (a < max)
		a = max;
	return (a);
}
