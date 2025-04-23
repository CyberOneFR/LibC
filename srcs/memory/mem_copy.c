/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_copy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:09:45 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/23 05:48:39 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	mem_copy(void *src, void *dest, ulong size)
{
	ulong	i;

	i = 0;
	while (i < size)
	{
		if ((size - i) >= sizeof(long))
		{
			*((long *)(dest + i)) = *((long *)(src + i));
			i += sizeof(long);
		}
		else
		{
			*((char *)(dest + i)) = *((char *)(src + i));
			i += sizeof(char);
		}
	}
}
