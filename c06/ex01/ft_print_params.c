/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:54:20 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/17 14:06:08 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_string(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		write(1, &str[index++], 1);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	counter;

	counter = 1;
	while (counter < argc)
	{
		ft_put_string(argv[counter]);
		counter++;
	}
}
