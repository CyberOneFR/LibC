/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libc.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 17:03:44 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/23 01:00:05 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBC_H
# define LIBC_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_array
{
	uint	size;
	void	*content;
}	t_array;

typedef struct s_string
{
	uint	size;
	char	*content;
}	t_string;

//	array
long	sum_array(t_array *array, ulong type, long (*f)(void *));
//	array/macro
uint	arr_size(void *array);
//	memory
void	mem_copy(void *src, void *dest, uint size);
void	mem_zero(ulong size, ulong type, void *ptr);
int		smalloc(uint size, uint type, void **ret);
int		scalloc(ulong size, ulong type, void **ret);
//	string
int		str_join(t_array *tab, t_string *ret);
//	string/macro
uint	str_size(void *str);
//	string/cast
int		str_int(t_string *str, int *ret);
int		str_long(t_string *str, long *ret);

#endif