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
#include <stdio.h>

static size_t	ft_numstring(const char *s, char c)
{
	size_t	count;
	size_t	flag;

	count = 0;
	flag = 0;
	if (!s)
		return (0);
	while (*s != '\0')
	{
		if (*s == c)
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static size_t	ft_numchar(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (s[count] != c && s[count] != '\0')
		count++;
	return (count);
}

static char	**ft_free_matrix(const char **matrix, size_t len_matrix)
{
	while (len_matrix--)
		free((void *)matrix[len_matrix]);
	free(matrix);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**matrix;
	size_t	len;
	size_t	i;
	size_t	sl;

	i = 0;
	sl = 0;
	len = ft_numstring(s, c);
	matrix = (char **)malloc(sizeof(char *) * (len + 1));
	if (!matrix)
		return (NULL);
	while (i < len)
	{
		while (*s == c)
			s++;
		sl = ft_numchar((const char *)s, c);
		matrix[i] = (char *)malloc(sizeof(char) * sl + 1);
		if (!matrix[i])
			return (ft_free_matrix((const char **)matrix, len));
		ft_strlcpy(matrix[i], s, sl + 1);
		s = (ft_strchr(s, (int)c));
		i++;
	}
	matrix[i] = 0;
	return (matrix);
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
