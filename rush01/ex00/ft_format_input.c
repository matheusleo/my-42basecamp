/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 23:24:23 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/13 15:00:33 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_format_input(char *input, int format_input[16])
{
	int	aux_var;
	int	i_count;
	int	f_index;

	i_count = 0;
	f_index = 0;
	while (input[i_count] != '\0')
	{
		aux_var = input[i_count];
		if (48 <= aux_var && aux_var <= 57)
		{
			format_input[f_index] = input[i_count] - '0';
			f_index++;
		}
		i_count++;
	}
}
