/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achery <achery@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 15:48:10 by achery            #+#    #+#             */
/*   Updated: 2014/09/07 22:40:28 by ocosquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_not_line2(char nbr, char **sudoku, int i, int y)
{
	int	j;

	j = 0;
	while (j < 9)
	{
		if (sudoku[i][j] == nbr && j != y)
			return (0);
		j++;
	}
	return (1);
}

int		is_not_column2(char nbr, char **sudoku, int j, int x)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		if (sudoku[i][j] == nbr && i != x)
			return (0);
		i++;
	}
	return (1);
}

int		is_not_block2(char nbr, char **sudoku, int i, int j)
{
	int	limit_i;
	int	limit_j;
	int	x;
	int	y;

	limit_i = i - (i % 3);
	limit_j = j - (j % 3);
	x = i;
	y = j;
	i = limit_i;
	while (i < limit_i + 3)
	{
		j = limit_j;
		while (j < limit_j + 3)
		{
			if (sudoku[i][j] == nbr && i != x && j != y)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
