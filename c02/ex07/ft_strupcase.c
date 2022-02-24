/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:10:24 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/14 14:43:47 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	aux_var;
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		aux_var = str[counter];
		if (97 <= aux_var && aux_var <= 122)
			str[counter] = aux_var - 32;
		counter++;
	}
	return (str);
}
