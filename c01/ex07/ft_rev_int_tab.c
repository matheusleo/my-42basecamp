/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 01:13:14 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/09 01:48:31 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp_var;

	temp_var = *a;
	*a = *b;
	*b = temp_var;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;

	counter = 0;
	while (counter < size / 2)
	{
		ft_swap(tab + counter, tab + (size - 1) - counter);
		counter++;
	}	
}
