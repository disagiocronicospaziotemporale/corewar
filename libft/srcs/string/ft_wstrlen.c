/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 18:00:03 by anrzepec            #+#    #+#             */
/*   Updated: 2019/03/23 12:40:20 by anrzepec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_wstrlen(const wchar_t *s)
{
	const wchar_t	*temp;

	temp = s;
	while (*temp != L'\0')
		temp++;
	return (temp - s);
}
