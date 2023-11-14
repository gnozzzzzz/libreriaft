/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomez-m <gnoz2001@yahoo.es>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:07:12 by ggomez-m          #+#    #+#             */
/*   Updated: 2023/10/26 12:07:17 by ggomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cuentacortes(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*extraepalabra(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc((cuentacortes(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = extraepalabra(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

/*#include <string.h>
//#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	corte;
	size_t	total;

	corte = 0;
	total = ft_strlen(s);
	while (*(s + corte) != c)
	{
		if (*(s + corte) == 0)
			return (NULL);
		corte++;
	}
	res = malloc(2 * sizeof(char *));
	*res = malloc(corte * sizeof(char));
	*(res + 1) = malloc((total - corte) * sizeof(char));
	ft_strlcpy(*res, s, corte + 1);
	ft_strlcpy(*(res + 1), (s + (corte + 1)), total - corte);
	return (res);
}*/
/*
int main(int a1, int a2)
{
	char* texto = "texto xyx prueba";
	char** cortado = ft_split(texto, 'y');
	printf("%s - %s", *cortado, *(cortado + 1));
	return (1);
}*/
