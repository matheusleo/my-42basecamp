/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_input.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 01:13:19 by ekaik-ne          #+#    #+#             */
/*   Updated: 2022/02/14 03:02:58 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define FALSE 0
#define TRUE 1

int	*ft_atoi(char *str, int *buffer)
{
	int	x;
	int	y;
	int	value;

	y = 0;
	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == '-' || str[x] == '0')
			return (FALSE);
		x++;
	}
	x = 0;
	while (x < 32)
	{
		value = 0;
		if (x % 2 == 0)
		{
			value = (value * 10) + str[x] - '0';
			buffer[y++] = value;
			x++;
		}
		x++;
	}
	return (buffer);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

int	ft_validate_input(int argc, char *str)
{
	int	x;
	int	length;
	int	*buffer;
	int	*validad;

	x = 0;
	length = ft_strlen(str);
	if (argc != 2)
		return (FALSE);
	if (length != 31)
		return (FALSE);
	buffer = malloc (sizeof(int) * 16);
	validad = ft_atoi (str, buffer);
	if (validad != 0)
	{
		while (x < 16)
		{
			if (validad[x] < 1 || validad[x] > 4)
				return (FALSE);
			x++;
		}
		return (TRUE);
	}
	return (FALSE);
}
