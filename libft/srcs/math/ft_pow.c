/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 08:44:31 by anrzepec          #+#    #+#             */
/*   Updated: 2019/04/05 12:41:05 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_pow(int b, int e)
{
	int	res;

	res = 1;
	while (e > 0)
	{
		res *= b;
		e--;
	}
	return (e < 0) ? 0 : res;
}
