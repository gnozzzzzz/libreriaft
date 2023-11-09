/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomez-m <gnoz2001@yahoo.es>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:20:37 by ggomez-m          #+#    #+#             */
/*   Updated: 2023/10/19 14:20:40 by ggomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;

	i = 0;
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			*((char *)dest + n) = *((char *)src + n);
		}
	}
	else
	{
		while (i < n)
		{
			*((char *)dest + i) = *((char *)src + i);
			i++;
		}
	}
	return (dest);
}
