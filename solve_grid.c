/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achery <achery@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 15:48:29 by achery            #+#    #+#             */
/*   Updated: 2014/09/07 18:09:59 by achery           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

int			modif_line(int i, int *j)
{
	if (*j == 9)
	{
		*j = 0;
		i++;
	}
	return (i);
}

int			solve_grid(char **sudoku, int i, int j, char nbr)
{
	i = modif_line(i, &j);
	if (i == 9)
	{
		return (1);
	}
	if (sudoku[i][j] != '.')
	{
		return (solve_grid(sudoku, i, j + 1, '1'));
	}
	while (nbr <= '9')
	{
		if (is_not_line(nbr, sudoku, i) && is_not_column(nbr, sudoku, j)
			&& is_not_block(nbr, sudoku, i, j))
		{
			sudoku[i][j] = nbr;
			if (solve_grid(sudoku, i, j + 1, '1'))
			{
				return (1);
			}
		}
		nbr++;
	}
	sudoku[i][j] = '.';
	return (0);
}
