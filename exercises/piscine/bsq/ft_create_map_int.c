/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akekesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:30:58 by akekesi           #+#    #+#             */
/*   Updated: 2022/07/12 22:33:22 by akekesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <functions.h>

int	**ft_create_map_int(char *path, int row, int col, char *chars)
{
	int		fd;
	int		i_row;
	int		i_col;
	int		**map;
	char	c[1];

	map = ft_create_empty_map_int(row, col);
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
			map[i_row][i_col] = ft_char_to_int(c[0], chars[0], chars[1]);
			i_col++;
		}
		read(fd, c, 1);
		i_row++;
	}
	close(fd);
	return (map);
}

int	**ft_create_empty_map_int(int row, int col)
{
	int	i_row;
	int	i_col;
	int	**map;

	map = (int **) malloc(sizeof(int *) * row);
	i_row = 0;
	while (i_row < row)
	{
		map[i_row] = (int *) malloc(sizeof(int) * col);
		i_row++;
	}
	i_row = 0;
	while (i_row < row)
	{
		i_col = 0;
		while (i_col < col)
		{
			map[i_row][i_col] = 0;
			i_col++;
		}
		i_row++;
	}
	return (map);
}

int	ft_char_to_int(char c, char free, char obstacle)
{
	if (c == obstacle)
		return (0);
	else if (c == free)
		return (1);
	else
		return (0);
}

void	ft_get_pos(int **map, int row, int col, int *pos)
{
	int	i_row;
	int	i_col;
	int	max;

	max = 0;
	i_row = 0;
	while (i_row < row)
	{
		i_col = 0;
		while (i_col < col)
		{
			if (map[i_row][i_col] > max)
			{
				max = map[i_row][i_col];
				pos[0] = i_row;
				pos[1] = i_col;
			}
			i_col++;
		}
		i_row++;
	}
}
