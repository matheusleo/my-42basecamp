/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:40:55 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/19 04:45:52 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	max_numb_sqrt;
	int	counter;
	int	pwr;

	max_numb_sqrt = 46340;
	counter = 1;
	if (nb <= 0)
		return (0);
	while (counter * counter <= nb && counter <= max_numb_sqrt)
	{
		pwr = counter * counter;
		counter++;
	}
	if (pwr == nb)
		return (counter - 1);
	return (0);
}
