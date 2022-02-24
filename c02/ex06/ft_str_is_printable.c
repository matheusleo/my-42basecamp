/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:50:26 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/15 13:25:34 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	aux_var;
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		aux_var = str[counter];
		if (aux_var < 32 && aux_var != 127)
			return (0);
		counter++;
	}
	return (1);
}
