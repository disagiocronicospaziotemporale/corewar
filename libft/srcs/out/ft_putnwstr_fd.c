/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnwstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 18:13:25 by anrzepec          #+#    #+#             */
/*   Updated: 2019/03/26 13:14:41 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnwstr_fd(const wchar_t *s, int fd, size_t n)
{
	long	i;

	i = (long)n;
	while (*s != L'\0')
	{
		i -= ft_wcharlen(*s);
		if (i < 0)
			break ;
		ft_putwchar_fd(*s, fd);
		s++;
	}
}
