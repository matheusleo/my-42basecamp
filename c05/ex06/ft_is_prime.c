/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:04:43 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/18 18:46:43 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FALSE 0
#define TRUE 1

int	ft_is_prime(int nb)
{
	int	counter;

	counter = 2;
	if (nb < 2)
		return (FALSE);
	while (counter <= (nb / counter))
	{
		if (nb % counter == 0)
			return (FALSE);
		counter++;
	}
	return (TRUE);
}
