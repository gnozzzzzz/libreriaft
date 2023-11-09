/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomez-m <gnoz2001@yahoo.es>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:21:43 by ggomez-m          #+#    #+#             */
/*   Updated: 2023/10/19 14:21:45 by ggomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>
#include <stdio.h>*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s;
	size_t	len_dst;
	size_t	res;
	size_t	len_src;
	size_t	i;

	s = (char *)src;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(s);
	res = 0;
	i = 0;
	if (size > len_dst)
		res = len_src + len_dst;
	else
		res = len_src + size;
	while (s[i] && (len_dst + 1) < size)
	{
		dst[len_dst] = s[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (res);
}
/*size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	size--;
	while (*((char *)dest + i) != 0)
	{
		if (size == i)
			*((char *)dest + i) = 0;
		i++;
	}
	while (*((char *)src + j) != 0)
	{
		if (size == i)
			*((char *)dest + i) = 0;
		else if (size > i)
			*((char *)dest + i) = *((char *)src + j);
		j++;
		i++;
	}
	return (i);
}*/
/*
int main (){
	char *c1 = "hoa";
	char *c2 = " adios";

	printf("strlcat");
}*/