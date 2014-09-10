/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achery <achery@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 15:48:10 by achery            #+#    #+#             */
/*   Updated: 2014/09/07 18:09:59 by achery           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_not_line(char nbr, char **sudoku, int i)
{
	int	j;

	j = 0;
	while (j < 9)
	{
		if (sudoku[i][j] == nbr)
			return (0);
		j++;
	}
	return (1);
}

int		is_not_column(char nbr, char **sudoku, int j)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		if (sudoku[i][j] == nbr)
			return (0);
		i++;
	}
	return (1);
}

int		is_not_block(char nbr, char **sudoku, int i, int j)
{
	int	limit_i;
	int	limit_j;
	int	buffer;

	limit_i = (i / 3) * 3;
	limit_j = (j / 3) * 3;
	i = limit_i;
	buffer = limit_j;
	while (i < limit_i + 3)
	{
		j = buffer;
		while (j < limit_j + 3)
		{
			if (sudoku[i][j] == nbr)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
