/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_array.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:07:55 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/23 05:48:27 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

long	sum_array(t_array *array, ulong type, long (*f)(void *))
{
	long	result;
	ulong	off;
	ulong	i;

	i = 0;
	off = 0;
	result = 0;
	while (i < array->size)
	{
		result += (long)((*f)(array->content + off));
		off += type;
		++i;
	}
	return (result);
}
