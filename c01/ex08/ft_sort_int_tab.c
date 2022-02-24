/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 02:15:37 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/09 14:10:09 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux_var;

	aux_var = *a;
	*a = *b;
	*b = aux_var;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	cur_index;
	int	cur_last;

	cur_last = 1;
	while (cur_last < size)
	{
		cur_index = 0;
		while (cur_index < cur_last)
		{
			if (*(tab + cur_index) > *(tab + cur_last))
			{
				ft_swap(tab + cur_index, tab + cur_last);
			}
			cur_index++;
		}
		cur_last++;
	}
}
