/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:29:04 by akekesi           #+#    #+#             */
/*   Updated: 2022/07/13 22:50:57 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <functions.h>

void	ft_print_main(char *path, int row, int col, char *chars)
{
	int		**map_int;
	int		rowcol[2];
	char	**map_char;

	map_char = ft_create_map_char(path, row, col);
	map_int = ft_create_map_int(path, row, col, chars);
	ft_calc_map(map_int, row, col);
	rowcol[0] = row;
	rowcol[1] = col;
	ft_create_result_map(map_int, map_char, rowcol, chars);
	ft_print_map_char(map_char, row, col);
	ft_freechar(map_char, 0, row);
	ft_freeint(map_int, 0, row);
}

void	ft_print_map_char(char **map, int row, int col)
{
	int		i_row;
	int		i_col;

	i_row = 0;
	while (i_row < row)
	{
		i_col = 0;
		while (i_col < col)
		{
			write(1, &map[i_row][i_col], 1);
			i_col++;
		}
		write(1, "\n", 1);
		i_row++;
	}
}
