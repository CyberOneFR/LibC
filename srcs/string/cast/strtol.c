/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtol.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 17:23:00 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/21 18:27:02 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int	strtol(t_string *str, long *ret)
{
	int		flag;
	uint	i;
	long	tmp;
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
		flag |= __builtin_smull_overflow(tmp, 10, &tmp);
		flag |= __builtin_saddl_overflow(tmp, (str->content[i] - 48), &tmp);
		++i;
	}
	if (ret)
		*ret = tmp * sign;
	return (flag);
}
