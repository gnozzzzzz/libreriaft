/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomez-m <gnoz2001@yahoo.es>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:22:58 by ggomez-m          #+#    #+#             */
/*   Updated: 2023/10/26 12:23:01 by ggomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	if (fd < 0)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/*#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (*(s + i) != 0)
	{
		write(fd, (s + i), 1);
		i++;
	}
	write(fd, "\n", 2);
}*/
/*
int main()
{
	ft_putendl_fd("hola que pasa	", 1);
	ft_putendl_fd("hola que pasa2	", 1);
}
*/
