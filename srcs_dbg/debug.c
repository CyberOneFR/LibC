/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 23:46:05 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/23 05:49:31 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"
#include <stdio.h>

ulong	str_len(char *str)
{
	ulong	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

int	main(int argc, char **argv)
{
	t_string	str;
	t_array		tab;
	ulong		i;

	if (argc < 2)
		return (0);
	--argc;
	++argv;
	tab.size = argc;
	tab.content = malloc(argc * sizeof(t_string));
	if (!tab.content)
	{
		printf("Error Malloc\n");
		return (1);
	}
	i = 0;
	while (i < tab.size)
	{
		((t_string *)tab.content)[i].content = argv[i];
		((t_string *)tab.content)[i].size = str_len(argv[i]);
		++i;
	}
	if (str_join(&tab, &str))
		return (1);
	write(1, "joined str: ", 12);
	write(1, str.content, str.size);
	write(1, "\n", 1);
	return (0);
}
