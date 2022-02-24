/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:29:22 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/12 22:52:20 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	ft_int_to_char(int i)
{
	return (i + '0');
}

void	ft_print_matrix(int matrix[4][4])
{
	int	rows;
	int	cols;

	rows = 0;
	while (rows < 4)
	{
		cols = 0;
		while (cols < 4)
		{
			ft_putchar(ft_int_to_char(matrix[rows][cols]));
			ft_putchar(' ');
			cols++;
		}
		ft_putchar('\n');
		rows++;
	}
}
