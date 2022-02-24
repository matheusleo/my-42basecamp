/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:40:01 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/15 21:05:41 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	quoc;
	int	remain;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			nb = nb * -1;
			ft_putstr('-');
		}
		quoc = nb / 10;
		remain = nb % 10;
		if (quoc != 0)
			ft_putnbr(quoc);
		ft_putstr(remain + '0');
	}
}
