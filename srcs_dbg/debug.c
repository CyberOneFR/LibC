/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 23:46:05 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/23 17:53:07 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"
#include <stdio.h>

int	test_str_split(void);

int	main(void)
{
	if (test_str_split())
		return (1);
	return (0);
}

int	test_str_split(void)
{
	t_array		splited;
	t_string	str;

	str.size = 20;
	str.content = "test1;test2;test3;test4;";
	splited.size = 0;
	splited.content = NULL;
	if (str_split(&str, ';', &splited))
		return (1);
	printf("%lu\n", splited.size);
	return (0);
}
