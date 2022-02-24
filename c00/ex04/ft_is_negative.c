/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 04:04:51 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/04 04:16:22 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{	
	char	signal;

	if (n >= 0)
	{
		signal = 'P';
	}
	else
	{
		signal = 'N';
	}
	write(1, &signal, 1);
}
