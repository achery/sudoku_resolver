/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achery <achery@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 15:49:05 by achery            #+#    #+#             */
/*   Updated: 2014/09/07 18:13:00 by achery           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_print(char **sudoku)
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 8)
		{
			ft_putchar(sudoku[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar(sudoku[i][j]);
		ft_putchar('\n');
		i++;
	}
}
