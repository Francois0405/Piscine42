/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fliraud- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:50:47 by fliraud-          #+#    #+#             */
/*   Updated: 2025/08/20 16:57:23 by fliraud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*
int	main(void)
{
	int	arr[] = {3, 1, 6, 2, 5, 4};

	ft_sort_int_tab(arr, 6);
	return (0);
}
*/
