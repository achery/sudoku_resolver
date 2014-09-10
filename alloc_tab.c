/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achery <achery@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 15:42:47 by achery            #+#    #+#             */
/*   Updated: 2014/09/07 18:09:59 by achery           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**alloc_tab(char **argv)
{
	int		i;
	int		j;
	char	**tab;

	tab = (char **)malloc(sizeof(char*) * 10);
	i = 1;
	j = 0;
	while (j != 9)
	{
		tab[j] = (char *)malloc(sizeof(char) * 10);
		j++;
	}
	while (i <= 9)
	{
		j = 0;
		while (j < 9)
		{
			tab[i - 1][j] = argv[i][j];
			j++;
		}
		i++;
	}
	return (tab);
}
