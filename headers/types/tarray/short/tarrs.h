/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tarrs.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 06:56:22 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/21 06:59:21 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARRS_H
# define TARRS_H

# include "def.h"

typedef struct s_arr_s
{
	int		*ptr;
	t_size	size;
}	t_arr_s;

#endif