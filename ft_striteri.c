/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomez-m <gnoz2001@yahoo.es>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:15:48 by ggomez-m          #+#    #+#             */
/*   Updated: 2023/10/26 12:15:55 by ggomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	indice;

	indice = 0;
	if (s == NULL)
		return ;
	while (*(s + indice) != 0)
	{
		f(indice, (s + indice));
		indice++;
	}
}
/*
void auxiliar(unsigned int i, char* c)
{
	*c = *c + 1;
}

int main() {
	char pru[] = "hola mundo\n";
	printf(pru);
	ft_striteri(pru, auxiliar);
	printf(pru);
}
*/
