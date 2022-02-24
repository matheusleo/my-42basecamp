/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:06:00 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/09 17:15:48 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	module;
	int	quocient;
	int	number;

	number = nb;
	if (number == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (number < 0)
		{
			number = number * (-1);
			write(1, "-", 1);
		}
		module = number % 10 + '0';
		quocient = number / 10;
		if (quocient != 0)
		{
			ft_putnbr(quocient);
		}
		write(1, &module, 1);
	}
}
