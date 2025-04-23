/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_join.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:27:59 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/23 00:51:58 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int	str_join(t_array *tab, t_string *ret)
{
	t_string	*str;
	ulong		i;

	ret->size = sum_array(tab, sizeof(t_string), (long (*)(void *))str_size);
	if (smalloc(ret->size, sizeof(char), (void *)&(ret->content)))
		return (1);
	i = 0;
	while (i < ret->size)
	{
		str = &((t_string *)tab->content)[i];
		mem_copy(str->content, &(ret->content[i]), str->size * sizeof(char));
		i += str->size;
	}
	return (0);
}
