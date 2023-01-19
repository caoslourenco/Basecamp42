/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clourenc  <clourenc@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 22:51:40 by clourenc          #+#    #+#             */
/*   Updated: 2022/04/16 03:08:18 by clourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char x, char y, char z);

void	ft_print_comb(void)

{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_print(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_print(char x, char y, char z)
{
	write (1, &x, 1);
	write (1, &y, 1);
	write (1, &z, 1);
	if (x != '7' || y != '8' || z != '9')
	{
		write(1, ", ", 2);
	}
}
