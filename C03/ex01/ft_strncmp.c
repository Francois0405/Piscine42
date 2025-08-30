/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fliraud- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:44:53 by fliraud-          #+#    #+#             */
/*   Updated: 2025/08/22 13:37:44 by fliraud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	diff;
	int	i;

	if (n == 0)
		return (0);
	diff = 0;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] &&  i < n)
	{
		i++;
	}
	if (s1[i] != s2[i] && i < n)
	{
		diff = s1[i] - s2[i];
	}
	return (diff);
}

/*
void    ft_putnbr(int num)
{
        char    c;

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

int	main(void)
{
	int	diff;
	int	diff2;

	diff = ft_strcmp("ABC", "ABC", 5);
	diff2 = strcmp("ABC", "ABC", 5);
	ft_putnbr(diff);
	ft_putnbr(diff2);
	return (0);
}
*/
