/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_address.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriccard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 11:31:19 by mriccard          #+#    #+#             */
/*   Updated: 2019/04/18 11:34:05 by mriccard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual_machine.h"

int				return_address(t_process *ps, int modify)
{
	int address;

	get_address(ps, modify, &address);
	return (address);
}
