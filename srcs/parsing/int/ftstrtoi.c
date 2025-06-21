/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftstrtoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 06:43:47 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/21 08:03:51 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tstr.h"
#include "identifier.h"
#include "def.h"

int	ftstrtoi(t_str	str, int *ret)
{
	int		sign;
	int		num;
	t_size	i;

	i = 0;
	num = 0;
	sign = 1;
	while (i < str.size && (str.ptr[i] == ' ' || str.ptr[i] == '	'))
		++i;
	while (i < str.size && (str.ptr[i] == '+' || str.ptr[i] == '-'))
	{
		sign = 44 - str.ptr[i];
		++i;
	}
	while (i < str.size && cisnumeric(str.ptr[i]))
	{
		if (__builtin_smul_overflow(num, 10, &num) || \
			__builtin_sadd_overflow(num, str.ptr[i] - '0', &num))
			return (1);
		++i;
	}
	if (__builtin_smul_overflow(num, sign, ret))
		return (1);
	return (0);
}
