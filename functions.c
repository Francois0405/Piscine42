/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fliraud- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:48:17 by fliraud-          #+#    #+#             */
/*   Updated: 2025/08/21 18:45:54 by fliraud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* PRINT FUNCTIONS */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/* STRING FUNCTIONS */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int     ft_strcmp(char *s1, char *s2)
{
        int     diff;
        int     i;

        i = 0;
        while (s1[i] == s2[i])
        {
                i++;
        }
        if (s1[i] != s2[i])
        {
                diff = s1[i] - s2[i];
        }
        return (diff);
}

/* ARRAY FUNCTIONS */

void	ft_rev_int_tab(int *tab, int size)
{
	int	front;
	int	back;
	int	temp;

	front = 0;
	back = size - 1;
	while (front < back)
	{
		temp = tab[front];
		tab[front] = tab[back];
		tab[back] = temp;
		front++;
		back--;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	ord;
	int	i;
	int	temp;

	i = 0;
	ord = 0;
	while (ord == 0)
	{
		i = 0;
		ord = 1;
		while (i < size - 1)
		{
			if (tab[i] < tab[i + 1])
			{
				ord = 0;
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
	}
}

/* MISC */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
