/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomez-m <gnoz2001@yahoo.es>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:21:11 by ggomez-m          #+#    #+#             */
/*   Updated: 2023/10/19 14:21:13 by ggomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}

/*char	*ft_strchr(const char *str, int c)
{
	char	*resultado;
	int		i;

	i = 0;
	while (*(str + i) != 0)
	{
		if (*(str + i) == c)
		{
			resultado = (char *)(str + i);
			return (resultado);
		}
		i++;
	}
	return (NULL);
}*/
