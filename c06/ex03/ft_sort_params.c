/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:23:05 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/17 21:08:32 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	write(1, str, len);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] != '\0' || s2[counter] != '\0')
	{
		if (s1[counter] != s2[counter])
			return (s1[counter] - s2[counter]);
		counter++;
	}
	return (0);
}

void	ft_swap(char **words, int pos_a, int pos_b)
{
	char	*aux_var;

	aux_var = words[pos_a];
	words[pos_a] = words[pos_b];
	words[pos_b] = aux_var;
}

void	ft_sort_params(char **tab, int size)
{
	int	cur_index;
	int	cur_last;

	cur_last = 2;
	while (cur_last < size)
	{
		cur_index = 1;
		while (cur_index < cur_last)
		{
			if (ft_strcmp(tab[cur_index], tab[cur_last]) > 0)
			{
				ft_swap(tab, cur_index, cur_last);
			}
			cur_index++;
		}
		cur_last++;
	}
}

int	main(int argc, char *argv[])
{
	int	counter;

	counter = 1;
	ft_sort_params(argv, argc);
	while (counter < argc)
	{
		ft_putstr(argv[counter]);
		counter++;
	}
}
