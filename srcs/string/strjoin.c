/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:27:59 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/22 17:22:24 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int	strjoin(t_array *tab, t_string *ret)
{
	t_string	*str;
	uint		i;

	ret->size = sum_array(tab, strsize);
	ret->content = (char *) malloc(ret->size * sizeof(char));
	if (!ret->content)
		return (1);
	i = 0;
	while (i < ret->size)
	{
		str = (t_string *)tab->content[i];
		memcopy(str->content, ret->content[i], str->size * sizeof(char));
		++i;
	}
	return (0);
}
