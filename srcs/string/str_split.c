/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:28:02 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/23 00:52:10 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int	str_split(t_string *str, char sep, t_array *ret)
{
	ulong	count;
	ulong	i;

	i = 0;
	count = 0;
	ret = NULL;
	while (i < str->size)
	{
		if (str->content[i] != sep)
			++count;
		++i;
	}
	return (0);
}
