/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 20:59:25 by gabde-al          #+#    #+#             */
/*   Updated: 2022/02/14 02:59:55 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define FALSE 0
#define TRUE 1

int		ft_validate_input(int argc, char *str);
void	ft_format_input(char *input, int format_input[16]);
int		ft_solve_tower(int matrix[4][4]);
int		ft_print_matrix(int matrix[4][4]);
void	ft_print_error(void);

int	main(int argc, char **argv)
{
	int	format_input[16];
	int	matrix[4][4];
	int	input[16];

	matrix = {
	{0, 0, 0, 0},
	{0, 0, 0, 0},
	{0, 0, 0, 0},
	{0, 0, 0, 0},
	};
	if (ft_validate_input(argc, argv[1]))
		ft_format_input(argv[1], input);
	else
	{
		ft_print_error();
		return (FALSE);
	}
	if (ft_solve_tower(matrix))
	{
		ft_print_matrix(matrix);
		return (TRUE);
	}
	ft_print_error();
	return (FALSE);
}
