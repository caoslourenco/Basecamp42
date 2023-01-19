/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clourenc  <clourenc@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 20:22:25 by clourenc          #+#    #+#             */
/*   Updated: 2022/04/12 21:51:25 by clourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numbers;

	numbers = '0';
	while (numbers <= '9')
	{
		write (1, &numbers, 1);
		numbers = numbers +1;
	}
}
