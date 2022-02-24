/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:58:50 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/19 01:54:09 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	counter;

	range = NULL;
	counter = 0;
	if (min >= max)
	{
		return (range);
	}
	range = (int *) malloc(sizeof (int) * (max - min));
	while (min < max)
	{
		range[counter] = min;
		counter++;
		min++;
	}
	return (range);
}
