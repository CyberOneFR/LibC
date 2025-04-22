/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcopy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:09:45 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/22 18:51:54 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	ft_memcopy(void *src, void *dest, uint size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if ((size - i) >= sizeof(long))
		{
			*(long *)(dest + i) = *(long *)(src + i);
			i += 8;
		}
		else
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i += 1;
		}
	}
}
