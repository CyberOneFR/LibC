/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smalloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 00:35:25 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/23 16:36:35 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int	smalloc(uint size, uint type, void **ret)
{
	*ret = malloc(size * type);
	if (!(*ret))
	{
		write(2, "Error Malloc\n", 13);
		return (1);
	}
	return (0);
}
