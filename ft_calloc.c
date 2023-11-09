/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomez-m <gnoz2001@yahoo.es>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:18:13 by ggomez-m          #+#    #+#             */
/*   Updated: 2023/10/19 14:18:17 by ggomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}
/*#include <stdlib.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	i;
	size_t	total;
	void	*resultado;

	i = 0;
	total = nitems * size;
	resultado = malloc(total);
	while (i < nitems)
	{
		*((char *)resultado + (i * size)) = 0;
		i++;
	}
	return (resultado);
}
*/