/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomez-m <gnoz2001@yahoo.es>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:59:03 by ggomez-m          #+#    #+#             */
/*   Updated: 2023/10/26 11:59:07 by ggomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;
	int		tam;

	tam = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(tam + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (*(s1 + i) != 0)
	{
		*(res + i) = *(s1 + i);
		i++;
	}
	j = 0;
	while (*(s2 + j) != 0)
	{
		*(res + i + j) = *(s2 + j);
		j++;
	}
	*(res + tam) = 0;
	return (res);
}
/*
int main(int a1, int a2)
{
	char* micadena = "hola";
	char* micadena2 = " que";
	printf("mi cadena es %s", ft_strjoin(micadena, micadena2));
}*/
