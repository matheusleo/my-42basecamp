/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:28:29 by gabde-al          #+#    #+#             */
/*   Updated: 2022/02/14 03:04:53 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	upper_border_condition(int matrix[4][4], int format_input[16],
	int border_index, int highest_tower)
{
	int	column;
	int	tower_count;
	int	row;

	column = 0;
	while (border_index < 4)
	{
		row = 0;
		tower_count = 0;
		highest_tower = 0;
		while (row < 4)
		{
			if (matrix[row][column] > highest_tower)
			{
				highest_tower = matrix[row][column];
				tower_count++;
			}
			row++;
		}
		if (tower_count != format_input[border_index])
			return (1);
		border_index++;
		column++;
	}
	return (0);
}

int	lower_border_condition(int matrix[4][4], int format_input[16],
	int border_index, int highest_tower)
{
	int	column;
	int	tower_count;
	int	row;

	column = 0;
	while (border_index < 8)
	{
		tower_count = 0;
		highest_tower = 0;
		row = 3;
		while (row >= 0)
		{
			if (matrix[4][4] > highest_tower)
			{
				highest_tower = matrix[4][4];
				tower_count = tower_count + 1;
			}
			row--;
		}
		if (tower_count != format_input[border_index])
			return (1);
		border_index++;
		column++;
	}
	return (0);
}

int	left_border_condition(int matrix[4][4], int format_input[16],
	int border_index, int highest_tower)
{
	int	row;
	int	tower_count;
	int	column;

	row = 0;
	while (border_index < 12)
	{
		tower_count = 0;
		highest_tower = 0;
		column = 0;
		while (column < 4)
		{
			if (matrix[4][4] > highest_tower)
			{
				highest_tower = matrix[4][4];
				tower_count = tower_count + 1;
			}
			column++;
		}
		if (tower_count != format_input[border_index])
			return (1);
		border_index++;
		column++;
	}
	return (0);
}

int	right_border_condition(int matrix[4][4], int format_input[16],
	int border_index, int highest_tower)
{
	int	row;
	int	tower_count;
	int	column;

	row = 0;
	while (border_index < 16)
	{
		tower_count = 0;
		highest_tower = 0;
		column = 3;
		while (column >= 0)
		{
			if (matrix[4][4] > highest_tower)
			{
				highest_tower = matrix[4][4];
				tower_count = tower_count + 1;
			}
			column--;
		}
		if (tower_count != format_input[border_index])
			return (1);
		border_index++;
		row++;
	}
	return (0);
}
