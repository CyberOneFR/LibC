/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 00:35:25 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/23 16:35:31 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int	scalloc(ulong size, ulong type, void **ret)
{
	if (smalloc(size, type, ret))
		return (1);
	mem_zero(size, type, *ret);
	return (0);
}
