/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 03:56:51 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/15 13:35:57 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define FALSE 0
#define TRUE 1

int	is_non_printable(int c)
{
	if (c < 32 || c == 127)
		return (TRUE);
	return (FALSE);
}

void	calculate_hex(int c, char *hex_num)
{
	hex_num[0] = '\\';
	hex_num[1] = (c / 16) + 48;
	hex_num[2] = c % 16 + 48;
	if (hex_num[2] > '9')
	{
		hex_num[2] += 39;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		counter;
	int		aux_var;
	char	hex[3];

	counter = 0;
	while (str[counter] != '\0')
	{
		aux_var = str[counter];
		if (is_non_printable(aux_var))
		{
			calculate_hex(aux_var, hex);
			write(1, hex, 3);
			counter++;
		}
		write(1, &str[counter], 1);
		counter++;
	}
}
