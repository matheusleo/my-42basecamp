/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:36:27 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/17 13:48:44 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *word)
{
	int	counter;

	counter = 0;
	while (word[counter] != '\0')
	{
		write (1, &word[counter], 1);
		counter++;
	}
}

int	main(int argc, char *argv[])
{
	ft_print_program_name(argv[argc - 1]);
	write (1, "\n", 1);
}
