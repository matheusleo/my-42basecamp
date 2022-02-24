/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 02:22:23 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/14 14:01:12 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	index;
	int	aux_var;

	index = 0;
	while (str[index] != '\0')
	{	
		aux_var = str[index];
		if (!(65 <= aux_var && aux_var <= 122))
			return (0);
		else if (90 < aux_var && aux_var < 97)
			return (0);
		index++;
	}
	return (1);
}
