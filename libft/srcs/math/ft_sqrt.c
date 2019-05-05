/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 09:56:30 by acolas            #+#    #+#             */
/*   Updated: 2019/04/05 12:34:42 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int a)
{
	int	i;

	i = 0;
	while (i * i < a)
		i++;
	if (i * i == a)
		return (i);
	return (0);
}