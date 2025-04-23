/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 17:23:00 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/23 00:13:13 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int	str_int(t_string *str, int *ret)
{
	int		flag;
	uint	i;
	int		res;
	int		sign;

	i = 0;
	res = 0;
	flag = 0;
	sign = 1;
	while (i < str->size && str->content[i] >= 9 && str->content[i] <= 13)
		++i;
	while (i < str->size && (str->content[i] == '+' || str->content[i] == '-'))
	{
		sign *= 44 - str->content[i];
		++i;
	}
	while (i < str->size && str->content[i] >= '0' && str->content[i] <= '9')
	{
		flag |= __builtin_smul_overflow(res, 10, &res);
		flag |= __builtin_sadd_overflow(res, (str->content[i] - 48), &res);
		++i;
	}
	if (ret)
		*ret = res * sign;
	return (flag);
}
