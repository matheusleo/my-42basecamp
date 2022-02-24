/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:47:26 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/14 14:12:31 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	counter;
	int	aux_var;

	counter = 0;
	while (str[counter] != '\0')
	{
		aux_var = str[counter];
		if (aux_var < 97 || aux_var > 122)
			return (0);
		counter++;
	}
	return (1);
}
