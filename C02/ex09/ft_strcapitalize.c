/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fliraud- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 19:14:02 by fliraud-          #+#    #+#             */
/*   Updated: 2025/08/21 17:50:54 by fliraud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*loop(char *str, int first, int i)
{
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			if (first == 0)
				str[i] = str[i] + 32;
			else
				first = 0;
		}
		else if (str[i] >= 97 && str[i] <= 122 && first == 1)
		{
			str[i] = str[i] - 32;
			first = 0;
		}
		else if (str[i] >= 48 && str[i] <= 57)
		{
			first = 0;
		}
		else if (str[i] < 65 || str[i] > 90 && str[i] < 97 || str[i] > 122)
			first = 1;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first;

	i = 0;
	first = 1;
	str = loop(str, first, i);
	return (str);
}
/*
void    ft_putstr(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                write(1, &str[i], 1);
                i++;
        }
}

int	main(void)
{
	char	str[] = "? 42mots quarante-deux; cinquante+et+un";
	char	*dest;
	dest = ft_strcapitalize(str);
	ft_putstr(dest);

	return (0);
}
*/
