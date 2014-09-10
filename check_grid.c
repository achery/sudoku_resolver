/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achery <achery@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 15:43:07 by achery            #+#    #+#             */
/*   Updated: 2014/09/10 14:57:46 by achery           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

int		ft_check_line(char *str, int *nb_nbr)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != '.')
		{
			return (0);
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			*nb_nbr = *nb_nbr + 1;
		}
		i++;
	}
	return (i);
}

int		ft_check_grid_valid(char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] != '.')
			{
				if (is_not_line2(argv[i][j], argv, i, j) == 0)
					return (0);
				if (is_not_column2(argv[i][j], argv, j, i) == 0)
					return (0);
				if (is_not_block2(argv[i][j], argv, i - 1, j) == 0)
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		check_grid(int argc, char *argv[])
{
	int	i;
	int	nb_nbr;

	i = 1;
	nb_nbr = 0;
	if (argc != 10)
		return (0);
	while (i < 10)
	{
		if (ft_check_line(argv[i], &nb_nbr) != 9)
			return (0);
		i++;
	}
	if (nb_nbr < 17)
		return (0);
	i = 0;
	if (ft_check_grid_valid(argv) == 0)
		return (0);
	return (1);
}
