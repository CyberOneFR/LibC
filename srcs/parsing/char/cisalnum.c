/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cisalnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 07:22:19 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/21 08:05:25 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identifier.h"

int	cisalnum(char c)
{
	return (cisalpha(c) || cisnumeric(c));
}
