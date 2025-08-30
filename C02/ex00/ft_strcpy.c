/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fliraud- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:00:49 by fliraud-          #+#    #+#             */
/*   Updated: 2025/08/21 15:32:30 by fliraud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>

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
	char	src[] = "Hola Mundo!!!";
	char	*dest;
	char	*dest2;
	dest = ft_strcpy(dest, src);
	dest2 = strcpy(dest, src);

	ft_putstr(dest);
	ft_putstr(dest2);
	return (0);	
}
*/
