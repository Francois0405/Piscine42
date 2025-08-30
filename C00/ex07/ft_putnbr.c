/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fliraud- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 14:54:48 by fliraud-          #+#    #+#             */
/*   Updated: 2025/08/19 19:00:39 by fliraud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int num)
{
	char	c;

	if (num > 2147483647 || num < -2147483648)
	{
		return ;
	}
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
	}
	c = num % 10 + '0';
	write(1, &c, 1);
}
/*
int	main(void)
{
	ft_putnbr(-7);
	write(1, " ", 1);
	ft_putnbr(42);
	write(1, " ", 1);
	ft_putnbr(-952);
	write(1, " ", 1);
	ft_putnbr(1000);
	write(1, " ", 1);
	ft_putnbr(-47214);
	write(1, " ", 1);
	ft_putnbr(-2147483648);
	return (0);
}
*/
