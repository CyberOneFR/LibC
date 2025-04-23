/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:28:02 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/23 16:31:30 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int	str_split(t_string *str, char sep, t_array *ret)
{
	ulong	i;
	ulong	size;

	i = 0;
	while (i < str->size)
	{
		if (str->content[i] != sep && (i == 0 || str->content[i] == sep))
			++size;
		++i;
	}
	printf("%d\n", size);
	return (0);
}
