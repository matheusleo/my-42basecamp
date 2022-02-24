/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:24:58 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/07 16:06:40 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printchars(int dozens, int unit)
{
	write(1, &dozens, 1);
	write(1, &unit, 1);
}

void	ft_print_comb2(void)
{	
	int	first;
	int	second;

	first = 00;
	while (first <= 98)
	{	
		second = first + 1;
		while (second <= 99)
		{
			ft_printchars(first / 10 + '0', first % 10 + '0');
			write(1, " ", 1);
			ft_printchars(second / 10 + '0', second % 10 + '0');
			if (first != 98)
			{
				write(1, ", ", 2);
			}
			second++;
		}
		first++;
	}
}
