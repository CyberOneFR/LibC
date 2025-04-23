/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 23:46:05 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/23 16:54:24 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"
#include <stdio.h>

int	main(int argc, char **argv)
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
	str.content = "test1;test2;test3;test4";
	if (str_split(&str, ';', &splited))
		return (1);
	
}
