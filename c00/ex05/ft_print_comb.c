/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 04:22:15 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/04 15:26:43 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_combination(char first, char second, char third)
{
	write(1, &first, 1);
	write(1, &second, 1);
	write(1, &third, 1);
}

void	ft_print_comb(void)
{
	char	hundreds;
	char	dozens;
	char	unit;

	hundreds = '0';
	while (hundreds <= '7')
	{
		dozens = hundreds + 1;
		while (dozens <= '8')
		{
			unit = dozens + 1;
			while (unit <= '9')
			{
				print_combination(hundreds, dozens, unit);
				if (hundreds != '7')
				{
					write(2, ", ", 2);
				}
				unit++;
			}
			dozens++;
		}
		hundreds++;
	}
}
