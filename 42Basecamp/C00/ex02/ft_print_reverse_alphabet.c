/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clourenc  <clourenc@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 20:02:35 by clourenc          #+#    #+#             */
/*   Updated: 2022/04/12 21:26:40 by clourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphabet;	

	alphabet = 'z';
	while (alphabet >= 'a')
	{
		write (1, &alphabet, 1);
		alphabet = alphabet - 1;
	}
}
