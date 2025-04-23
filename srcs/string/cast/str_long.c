/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_long.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 17:23:00 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/23 05:37:32 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int	str_long(t_string *str, long *ret)
{
	int		flag;
	ulong	i;
	long	res;
	int		sign;

	i = 0;
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
		flag |= __builtin_smull_overflow(res, 10, &res);
		flag |= __builtin_saddl_overflow(res, (str->content[i] - 48), &res);
		++i;
	}
	if (ret)
		*ret = res * sign;
	return (flag);
}
