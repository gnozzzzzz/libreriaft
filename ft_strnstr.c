/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomez-m <gnoz2001@yahoo.es>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:22:49 by ggomez-m          #+#    #+#             */
/*   Updated: 2023/10/19 14:22:52 by ggomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;
	char	*hay;

	i = 0;
	hay = (char *)haystack;
	n_len = ft_strlen(needle);
	if (n_len == 0 || haystack == needle)
		return (hay);
	while (hay[i] != '\0' && i < len)
	{
		c = 0;
		while (hay[i + c] != '\0' && needle[c] != '\0'
			&& hay[i + c] == needle[c] && i + c < len)
			c++;
		if (c == n_len)
			return (hay + i);
		i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>

static int	soniguales(char *c1, const char *c2, size_t tam)
{
	while (*(c1 + tam) == *(c2 + tam))
	{
		if (tam == 0)
			return (1);
		tam--;
	}
	return (0);
}

char	*ft_strnstr(const char *st1, const char *str2, size_t slen)
{
	size_t	tam;
	char	*str1;

	str1 = (char *)st1;
	tam = 0;
	while (*(str2 + tam) != 0)
		tam++;
	if (tam == 0)
		return (str1);
	while (*str1 != 0)
	{
		if (*str1 == *str2)
		{
			if (soniguales(str1, str2, (tam - 1)) == 1)
				return (str1);
		}
		if ((slen - tam) == 0)
			return (NULL);
		slen--;
		str1++;
	}
	return (NULL);
}*/
/*
int main(int a1, int a2)
{
	char* c1 = "123456789";
	char* c2 = "34";

	printf("hola %s", ft_strnstr(c1, c2, 10));
	return 1;
}*/