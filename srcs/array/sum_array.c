/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_array.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:07:55 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/23 00:52:20 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"
#include <stdio.h>

long	sum_array(t_array *array, ulong type, long (*f)(void *))
{
	long	result;
	ulong	i;

	i = 0;
	result = 0;
	while (i < array->size)
	{
		result += (*f)(array->content + type);
		++i;
	}
	return (result);
}
