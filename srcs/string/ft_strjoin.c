/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:27:59 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/22 23:40:59 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int	ft_strjoin(t_array *tab, t_string *ret)
{
	t_string	*str;
	uint		i;

	ret->size = ft_sum_array(tab, ft_strsize);
	ret->content = (char *) malloc(ret->size * sizeof(char));
	if (!ret->content)
		return (1);
	i = 0;
	while (i < ret->size)
	{
		str = (t_string *)tab->content[i];
		ft_memcopy(str->content, ret->content[i], str->size * sizeof(char));
		i += str->size;
	}
	return (0);
}
