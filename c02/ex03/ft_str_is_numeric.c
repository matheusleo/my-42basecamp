/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 03:17:44 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/14 14:06:40 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	counter;
	int	aux_var;

	counter = 0;
	while (str[counter] != '\0')
	{
		aux_var = str[counter];
		if (aux_var < 48 || aux_var > 57)
			return (0);
		counter++;
	}
	return (1);
}
