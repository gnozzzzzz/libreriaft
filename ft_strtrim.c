/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomez-m <gnoz2001@yahoo.es>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:03:18 by ggomez-m          #+#    #+#             */
/*   Updated: 2023/10/26 12:03:23 by ggomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(s1 + end + 1));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	str = malloc(end - start + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}

/*#include <string.h>
//#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	strtrimx(char const *s1)
{
	if (ft_strlen(s1) == 0)
		return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		inicio;
	int		final;
	int		indice;

	if (strtrimx(s1) == 0)
		return (NULL);
	inicio = 0;
	final = ft_strlen(s1) - 1;
	indice = 0;
	while (inicio < final && ft_strchr(set, *(s1 + inicio)))
		inicio++;
	while (final > inicio && ft_strchr(set, *(s1 + final)))
		final--;
	res = malloc((final - inicio + 1) * sizeof(char));
	while (inicio < (final + 1))
	{
		*(res + indice) = *(s1 + inicio);
		inicio++;
		indice++;
	}
	return (res);
}*/
