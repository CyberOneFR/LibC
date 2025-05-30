/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:28:02 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/23 20:15:21 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int	str_split(t_string *str, char sep, t_array *ret)
{
	ulong	size;
	ulong	i;

	i = -1;
	while (++i < str->size)
		if (str->content[i] != sep && (i == 0 || str->content[i - 1] == sep))
			++size;
	if (smalloc(size, sizeof(t_string), &(ret->content)))
		return (1);
	i = -1;
	while (++i < str->size)
	{
		if (str_cut())
			return (1);
	}
	return (0);
}
