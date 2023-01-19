/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clourenc  <clourenc@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 19:53:39 by clourenc          #+#    #+#             */
/*   Updated: 2022/04/12 21:21:49 by clourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{		
		write (1, &alphabet, 1);
		alphabet++;
	}
}
