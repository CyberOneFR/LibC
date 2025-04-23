/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libc.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 17:03:44 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/23 16:38:55 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBC_H
# define LIBC_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_array
{
	ulong	size;
	void	*content;
}	t_array;

typedef struct s_string
{
	ulong	size;
	char	*content;
}	t_string;

//	array
long	sum_array(t_array *array, ulong type, long (*f)(void *));
//	array/macro
ulong	arr_size(void *array);
//	memory
void	mem_copy(void *src, void *dest, ulong size);
void	mem_zero(ulong size, ulong type, void *ptr);
int		smalloc(uint size, uint type, void **ret);
int		scalloc(ulong size, ulong type, void **ret);
//	string
int		str_join(t_array *tab, t_string *ret);
int		str_split(t_string *str, char sep, t_array *ret);
//	string/macro
ulong	str_size(void *str);
//	string/cast
int		str_int(t_string *str, int *ret);
int		str_long(t_string *str, long *ret);

#endif