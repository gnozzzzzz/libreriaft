/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomez-m <gnoz2001@yahoo.es>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:17:39 by ggomez-m          #+#    #+#             */
/*   Updated: 2023/10/19 14:17:50 by ggomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	num;
	int				i;
	int				np;

	np = 1;
	i = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\n' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			np = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(np * num));
}

/*#include <string.h>
#include <limits.h>

static int	extratoi(const char *str)
{
	size_t	i;
	int		resultado;

	resultado = 0;
	i = 0;
	while (*(str + i) != 0)
	{
		if (*(str + i) < 48 || *(str + i) > 57)
			break ;
		resultado *= 10;
		resultado += *(str + i) - 48;
		i++;
	}
	return (resultado);
}

static int	lineatoi(char c)
{
	int	resultado;

	resultado = 0;
	if (c == ' ')
		resultado = 1;
	if (c == '\t')
		resultado = 1;
	if (c == '\n')
		resultado = 1;
	if (c == '\r')
		resultado = 1;
	if (c == '\t')
		resultado = 1;
	return (resultado);
}

int	ft_atoi(const char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i) != 0)
	{
		if (*(str + i) >= '0' && *(str + i) <= '9')
			return (extratoi(str + i));
		if (*(str + i) == '+')
			return (extratoi(str + (i + 1)));
		if (*(str + i) == '-')
			return (-extratoi(str + (i + 1)));
		if (lineatoi(*(str + i)) == 1)
			i++;
		else
			return (0);
	}
	return (0);
}
*/