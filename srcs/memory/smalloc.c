/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smalloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 00:35:25 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/23 00:58:24 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int	smalloc(uint size, uint type, void **ret)
{
	*ret = malloc(size * type);
	if (!(*ret))
	{
		return (1);
	}
	return (0);
}
