/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocosquer <ocosquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 21:52:34 by ocosquer          #+#    #+#             */
/*   Updated: 2014/09/10 14:57:31 by achery           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_H
# define FUNCTION_H

# include <unistd.h>
# include <stdlib.h>

int		is_not_block(char nbr, char **sudoku, int i, int j);
int		is_not_column(char nbr, char **sudoku, int j);
int		is_not_line(char nbr, char **sudoku, int i);
void	ft_print(char **sudoku);
void	ft_putchar(char c);
int		verif_sol(char **tab);
char	**alloc_tab(char **argv);
int		check_grid(int argc, char *argv[]);
int		ft_check_grid_valid(char **argv);
int		ft_check_line(char *str, int *nb_nbr);
int		modif_line(int i, int *j);
int		solve_grid(char **sudoku, int i, int j, char nbr);
int		is_not_line2(char nbr, char **sudoku, int i, int y);
int		is_not_column2(char nbr, char **sudoku, int j, int x);
int		is_not_block2(char nbr, char **sudoku, int i, int j);
#endif
