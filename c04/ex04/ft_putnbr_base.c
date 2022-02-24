/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:23:57 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/16 18:29:02 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define FALSE 0
#define TRUE 1

int	ft_is_duplicate(char *str)
{
	int	counter;
	int	index;

	counter = 0;
	while (str[counter] != '\0')
	{
		index = counter + 1;
		while (str[index] != '\0')
		{
			if (str[counter] == str[index])
				return (TRUE);
			index++;
		}
		counter++;
	}
	return (FALSE);
}

int	ft_is_base_valid(char *base)
{
	int	counter;

	counter = 0;
	if (ft_is_duplicate(base))
		return (FALSE);
	while (base[counter] != '\0')
	{	
		if (base[counter] == '-' || base[counter] == '+')
			return (FALSE);
		counter++;
	}
	if (counter == 0 || counter == 1)
		return (FALSE);
	return (TRUE);
}

void	write_num_on_base(int nbr, char *base)
{
	int	l_system;
	int	module;
	int	quoc;

	l_system = 0;
	while (base[l_system] != '\0')
		l_system++;
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		write(1, "-", 1);
	}
	module = nbr % l_system;
	quoc = nbr / l_system;
	if (quoc != 0)
		write_num_on_base(quoc, base);
	write(1, (base + module), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (!(ft_is_base_valid(base)))
		return ;
	write_num_on_base(nbr, base);
}
