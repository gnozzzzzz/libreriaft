/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomez-m <gnoz2001@yahoo.es>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:23:11 by ggomez-m          #+#    #+#             */
/*   Updated: 2023/10/19 14:23:13 by ggomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

//#include <stddef.h>

/*char	*ft_strrchr(const char *str, int c)
{
	char	*resultado;
	int		i;

	resultado = NULL;
	i = 0;
	while (*(str + i) != 0)
	{
		if (*(str + i) == c)
		{
			resultado = (char *)(str + i);
		}
		i++;
	}
	return (resultado);
}*/
