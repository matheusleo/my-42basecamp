/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:46:21 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/14 14:46:56 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	counter;
	int	aux_var;

	counter = 0;
	while (str[counter] != '\0')
	{
		aux_var = str[counter];
		if (65 <= aux_var && aux_var <= 90)
			str[counter] = str[counter] + 32;
		counter++;
	}
	return (str);
}
