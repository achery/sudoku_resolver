/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achery <achery@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 15:47:58 by achery            #+#    #+#             */
/*   Updated: 2014/09/07 18:09:59 by achery           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

int			main(int argc, char **argv)
{
	char	**tab;

	if (check_grid(argc, argv) == 0)
		write(1, "Erreur\n", 7);
	else
	{
		tab = alloc_tab(argv);
		solve_grid(tab, 0, 0, '1');
		if (verif_sol(tab) == 0)
		{
			write(1, "Erreur\n", 7);
			return (0);
		}
		ft_print(tab);
	}
	return (0);
}
