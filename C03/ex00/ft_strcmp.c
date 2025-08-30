/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fliraud- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:29:44 by fliraud-          #+#    #+#             */
/*   Updated: 2025/08/21 18:45:07 by fliraud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	diff;
	int	i;

	diff = 0;
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if (s1[i] != s2[i])
	{
		diff = s1[i] - s2[i];
	}
	return (diff);
}
/*
int	main(void)
{
	int	diff;

	diff = ft_strcmp("ABC", "ABC");
	return (0);
}
*/
