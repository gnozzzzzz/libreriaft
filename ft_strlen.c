/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomez-m <gnoz2001@yahoo.es>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:22:17 by ggomez-m          #+#    #+#             */
/*   Updated: 2023/10/19 14:22:19 by ggomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t	resultado;

	resultado = 0;
	while (*(str + resultado) != 0)
		resultado++;
	return (resultado);
}
