/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fliraud- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:15:32 by fliraud-          #+#    #+#             */
/*   Updated: 2025/08/21 17:49:54 by fliraud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>

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

int     main(void)
{
        char    src[] = "Hola Mundo!!!";
        char    *dest;
        char    *dest2;
        dest = ft_strncpy(dest, src, 15);
        dest2 = strncpy(dest, src, 15);

        ft_putstr(dest);
        ft_putstr(dest2);
        return (0);
}
*/
