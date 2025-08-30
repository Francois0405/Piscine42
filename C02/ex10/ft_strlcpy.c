/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fliraud- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 19:38:58 by fliraud-          #+#    #+#             */
/*   Updated: 2025/08/21 18:10:01 by fliraud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[size - 1] = '\0';
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
void	ft_putstr(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                write(1, &str[i], 1);
                i++;
        }
}

int     main(void)
{
        char    src[] = "Hola Mundo!!!";
        char    *dest;
        char    *dest2;
        dest = ft_strlcpy(dest, src, 15);
        dest2 = strlcpy(dest, src, 15);

        ft_putstr(dest);
        ft_putstr(dest2);
        return (0);
}
*/
