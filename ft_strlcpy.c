/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomez-m <gnoz2001@yahoo.es>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:21:55 by ggomez-m          #+#    #+#             */
/*   Updated: 2023/10/19 14:21:59 by ggomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int			i;
	char		*cdest;
	const char	*csrc;
	size_t		resultado;

	cdest = dest;
	csrc = src;
	i = size - 1;
	if (i >= 0)
		*(cdest + i) = 0;
	i--;
	while (i >= 0)
	{
		*(cdest + i) = *(csrc + i);
		i--;
	}
	resultado = 0;
	while (*(src + resultado) != 0)
		resultado++;
	return (resultado);
}*/

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	tam;

	tam = 0;
	count = 0;
	while (*(src + tam) != 0)
		tam++;
	if (size == 0)
		return (tam);
	while (src[count] != '\0' && count < (size - 1))
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (tam);
}
