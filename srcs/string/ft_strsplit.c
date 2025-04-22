/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:28:02 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/22 23:41:13 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

t_array	*ft_strsplit(t_string *str, char sep)
{
	uint	i;
	uint	count;

	i = 0;
	count = 0;
	while (i < str->size)
	{
		if (str->content[i] != sep)
			++count;
		++i;
	}
}
