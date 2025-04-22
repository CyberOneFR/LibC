/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_array.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:07:55 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/21 20:29:09 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"
#include <stdio.h>

int	sum_array(t_array *array, int (*f)(void *))
{
	int		result;
	uint	i;

	i = 0;
	while (i < array->size)
	{
		result += (*f)(array->content[i]);
		++i;
	}
	return (result);
}
