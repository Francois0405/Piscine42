/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fliraud- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:10:37 by fliraud-          #+#    #+#             */
/*   Updated: 2025/08/20 13:50:18 by fliraud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	front;
	int	back;
	int	temp;

	front = 0;
	back = size - 1;
	while (!(back <= front))
	{
		temp = tab[front];
		tab[front] = tab[back];
		tab[back] = temp;
		front++;
		back--;
	}
}

/*
int	main(void)
{
	int	arr[5] = { 1, 2, 3, 4, 5};
	int	size = 5;

	ft_rev_int_tab(arr, size);
}
*/
