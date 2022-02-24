/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:56:28 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/16 15:23:20 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FALSE 0
#define TRUE 1

int	is_lower(int letter)
{
	if (letter < 97 || letter > 122)
		return (FALSE);
	return (TRUE);
}

int	is_upper(int letter)
{
	if (letter < 'A' || letter > 'Z')
		return (FALSE);
	return (TRUE);
}

int	is_symbol(int letter)
{
	if (!(is_lower(letter)) && !(is_upper(letter)))
	{
		if (!(48 <= letter && letter <= 57))
		{
			return (TRUE);
		}
	}
	return (FALSE);
}

char	*ft_strcapitalize(char *str)
{
	int	counter;
	int	aux_var;

	counter = 0;
	while (str[counter] != '\0')
	{
		aux_var = str[counter];
		if (counter == 0 && is_lower(aux_var))
			str[counter] = aux_var - 32;
		if (counter != 0)
		{
			if (is_lower(aux_var) && is_symbol(str[counter - 1]))
				str[counter] = aux_var - 32;
			if (is_upper(aux_var) && !(is_symbol(str[counter - 1])))
				str[counter] = aux_var + 32;
		}
		counter++;
	}
	return (str);
}
