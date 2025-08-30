/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fliraud- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:32:00 by fliraud-          #+#    #+#             */
/*   Updated: 2025/08/19 20:08:00 by fliraud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_chars(char a, char b, char c)
{
	char	coma;
	char	space;

	coma = ',';
	space = ' ';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
	{
		write(1, &coma, 1);
		write(1, &space, 1);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				if (a != b && a != c && b != c)
				{
					ft_print_chars(a, b, c);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}

