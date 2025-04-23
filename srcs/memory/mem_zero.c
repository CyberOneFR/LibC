/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_zero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 00:53:14 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/23 00:59:29 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	mem_zero(ulong size, ulong type, void *ptr)
{
	ulong	memory_size;
	ulong	i;

	i = 0;
	memory_size = size * type;
	while (i < memory_size)
	{
		if ((memory_size - i) >= sizeof(long))
		{
			*(long *)(ptr + i) = 0;
			i += sizeof(long);
		}
		else
		{
			*(char *)(ptr + i) = 0;
			i += sizeof(char);
		}
	}
	return ;
}
