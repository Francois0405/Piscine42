/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fliraud- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:17:53 by fliraud-          #+#    #+#             */
/*   Updated: 2025/08/20 12:46:42 by fliraud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*
int	main(void)
{
	int	x, y;
	int	*a;
	int	*b;

	x = 44;
	y = 4;
	a = &x;
	b = &y;
	ft_ultimate_div_mod(a, b);
	return (0);
}
*/
