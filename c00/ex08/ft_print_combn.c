/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:37:10 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/07 16:59:38 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	calc_factorial(int nbr)
{
	if (nbr == 1)
	{
		return (1);
	}
	else
	{
		return (nbr * calc_factorial(nbr - 1));
	}
}

int	calc_combinations(int nbr)
{
	int	divider;

	divider = (calc_factorial(nbr) * calc_factorial(10 - nbr));
	return (calc_factorial(10) / divider);
}

void	ft_print_combn(int n)
{
	write(1, &n, 2);
}
