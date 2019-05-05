/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 16:45:02 by acolas            #+#    #+#             */
/*   Updated: 2019/02/26 16:45:25 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstat(t_list *lst, size_t nbr)
{
	while (nbr > 0 && lst != NULL)
	{
		lst = lst->next;
		nbr--;
	}
	return ((nbr == 0) ? lst : NULL);
}