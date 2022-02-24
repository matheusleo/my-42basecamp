/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:54:03 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/16 19:19:23 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FALSE 0
#define TRUE 1

int	is_num(char c)
{
	if ('0' <= c && c <= '9')
		return (TRUE);
	return (FALSE);
}

int	is_space(char c)
{
	if (c == ' ' || ('\t' <= c && c <= '\r'))
		return (TRUE);
	return (FALSE);
}

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	counter;

	res = 0;
	sign = 1;
	counter = 0;
	while (is_space(str[counter]))
		counter++;
	while (str[counter] == '-' || str[counter] == '+')
	{
		if (str[counter] == '-')
			sign = sign * -1;
		counter++;
	}
	while (is_num(str[counter]))
	{
		res = res * 10 + (str[counter] - '0');
		counter++;
	}
	return (res * sign);
}
