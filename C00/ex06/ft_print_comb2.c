/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fliraud- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 11:57:04 by fliraud-          #+#    #+#             */
/*   Updated: 2025/08/19 18:59:06 by fliraud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_pairs(int num)
{
	char	x1;
	char	x2;

	x2 = num % 10 + '0';
	x1 = num / 10 + '0';
	write(1, &x1, 1);
	write(1, &x2, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_print_pairs(num1);
			write(1, " ", 1);
			ft_print_pairs(num2);
			if (!(num1 == 98 && num2 == 99))
				write(1, ",", 1);
			num2++;
		}
		num1++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
