/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libc.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 17:03:44 by ethebaul          #+#    #+#             */
/*   Updated: 2025/04/22 17:44:58 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBC_H
# define LIBC_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_array
{
	uint	size;
	void	**content;
}	t_array;

typedef struct s_string
{
	uint	size;
	char	*content;
}	t_string;

//	array
int		sum_array(t_array *array, int (*f)(void *));
//	array/macro
int		arrsize(void *array);
//	memory
void	memcopy(void *src, void *dest, uint size);
//	string
int		strjoin(t_array *tab, t_string *ret);
//	string/macro
int		strsize(void *str);
//	string/cast
int		strtoi(t_string *str, int *ret);
int		strtol(t_string *str, long *ret);

#endif