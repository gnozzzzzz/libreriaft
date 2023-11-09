/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnmbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomez-m <gnoz2001@yahoo.es>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:30:03 by ggomez-m          #+#    #+#             */
/*   Updated: 2023/10/26 12:30:14 by ggomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n < 10)
		ft_putchar_fd(n + '0', fd);
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}

/*#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	int		num;
	int		contador;
	char	aux;

	num = n;
	contador = 1;
	while (num > 9)
	{
		num = num / 10;
		contador *= 10;
	}
	aux = num + '0';
	write(fd, &aux, 1);
	if (contador > 1)
	{
		n -= contador * num;
		ft_putnbr_fd(n, fd);
	}
}*/
/*
int main()
{
	ft_putnbr_fd(12674, 1);
	ft_putnbr_fd(453563, 1);
}*/
