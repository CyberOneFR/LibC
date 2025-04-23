/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 00:35:25 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/23 00:59:44 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int	scalloc(ulong size, ulong type, void **ret)
{
	*ret = malloc(size * type);
	mem_zero(size, type, *ret);
	if (!(*ret))
	{
		return (1);
	}
	return (0);
}
