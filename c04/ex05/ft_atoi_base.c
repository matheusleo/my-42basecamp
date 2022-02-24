/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:27:52 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/17 02:48:26 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FALSE 0
#define TRUE 1

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	count_ocurrencies(char c, char *str)
{
	int	ocurr;
	int	index;

	ocurr = 0;
	index = 0;
	while (str[index] != '\0')
	{
		if (c == str[index])
			ocurr++;
		index++;
	}
	return (ocurr);
}

int	is_base_valid(char *base)
{
	int	counter;

	counter = 0;
	while (base[counter] != '\0' && count_ocurrencies(base[counter], base) == 1)
	{
		if (base[counter] == '-' || base[counter] == '+')
			return (FALSE);
		counter++;
	}
	if (counter == 0 || counter == 1)
		return (FALSE);
	return (TRUE);
}

int	ft_index_of_num(char num, char *base)
{
	int	counter;

	counter = 0;
	while (base[counter] != '\0')
	{
		if (num == base[counter])
			return (counter);
		counter++;
	}
	return (FALSE);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	sign;
	int	counter;
	int	l_system;

	res = 0;
	sign = 1;
	counter = 0;
	l_system = ft_strlen(base);
	if (!(is_base_valid(base)))
		return (0);
	while (str[counter] == ' ' || \
		('\t' <= str[counter] && str[counter] <= '\r'))
		counter++;
	while (str[counter] == '-' || str[counter] == '+')
	{
		if (str[counter] == '-')
			sign = sign * -1;
		counter++;
	}
	while (count_ocurrencies(str[counter], base) > 0)
		res = (res * l_system) + ft_index_of_num(str[counter++], base);
	return (res * sign);
}
