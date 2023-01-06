/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map_char.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:30:58 by akekesi           #+#    #+#             */
/*   Updated: 2022/07/13 22:36:26 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <functions.h>

char	**ft_create_map_char(char *path, int row, int col)
{
	int		fd;
	int		i_row;
	int		i_col;
	char	c[1];
	char	**map;

	map = ft_create_empty_map_char(row, col);
	fd = open(path, O_RDONLY);
	while (c[0] != '\n')
		read(fd, c, 1);
	i_row = 0;
	while (i_row < row)
	{
		i_col = 0;
		while (i_col < col)
		{
			read(fd, c, 1);
			map[i_row][i_col] = c[0];
			i_col++;
		}
		read(fd, c, 1);
		i_row++;
	}
	close(fd);
	return (map);
}

char	**ft_create_empty_map_char(int row, int col)
{
	int		i_row;
	int		i_col;
	char	**map;

	map = (char **) malloc(sizeof(char *) * row);
	ft_memset(map, 0, row + 1);
	i_row = 0;
	while (i_row < row)
	{
		map[i_row] = (char *) malloc(sizeof(char) * col);
		i_row++;
	}
	i_row = 0;
	while (i_row < row)
	{
		i_col = 0;
		while (i_col < col)
		{
			map[i_row][i_col] = '0';
			i_col++;
		}
		i_row++;
	}
	return (map);
}

void	ft_create_result_map(
		int **map_int, char **map_char, int *rowcol, char *chars)
{
	int	pos[2];
	int	steps;
	int	row;
	int	col;

	pos[0] = 0;
	pos[1] = 0;
	row = rowcol[0];
	col = rowcol[1];
	ft_get_pos(map_int, row, col, pos);
	steps = map_int[pos[0]][pos[1]] - 1;
	ft_fill_map_char(map_char, pos, steps, chars);
}

void	ft_fill_map_char(char **map_char, int *pos, int steps, char *chars)
{
	int	i_row;
	int	i_col;

	i_row = pos[0] - steps;
	while (i_row <= pos[0])
	{
		i_col = pos[1] - steps;
		while (i_col <= pos[1])
		{
			map_char[i_row][i_col] = chars[2];
			i_col++;
		}
		i_row++;
	}
}
