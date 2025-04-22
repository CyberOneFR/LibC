/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtoi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 17:23:00 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/22 18:51:49 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int	ft_strtoi(t_string *str, int *ret)
{
	int		flag;
	uint	i;
	int		tmp;
	int		sign;

	i = 0;
	tmp = 0;
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
		flag |= __builtin_smul_overflow(tmp, 10, &tmp);
		flag |= __builtin_sadd_overflow(tmp, (str->content[i] - 48), &tmp);
		++i;
	}
	if (ret)
		*ret = tmp * sign;
	return (flag);
}
