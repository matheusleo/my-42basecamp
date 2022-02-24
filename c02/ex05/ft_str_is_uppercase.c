/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:22:49 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/14 14:19:25 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	counter;
	int	aux_var;

	counter = 0;
	while (str[counter] != '\0')
	{
		aux_var = str[counter];
		if (aux_var < 65 || aux_var > 90)
			return (0);
		counter++;
	}
	return (1);
}
