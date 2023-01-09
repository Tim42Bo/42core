/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akekesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:08:47 by akekesi           #+#    #+#             */
/*   Updated: 2022/07/12 21:39:14 by akekesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <functions.h>

void	ft_calc_map(int **map, int row, int col)
{
	int	i_row;
	int	i_col;

	i_row = 0;
	while (i_row < row)
	{
		i_col = 0;
		while (i_col < col)
		{
			if (map[i_row][i_col] != 0)
				map[i_row][i_col] = ft_calc_pos(map, i_row, i_col);
			i_col++;
		}
		i_row++;
	}
}

int	ft_calc_pos(int **map, int i_row, int i_col)
{
	int	min;
	int	values[3];

	if (i_row > 0 && i_col > 0)
	{
		values[0] = map[i_row - 1][i_col - 1];
		values[1] = map[i_row - 1][i_col];
		values[2] = map[i_row][i_col - 1];
	}
	if (i_row == 0)
	{
		values[0] = 0;
		values[1] = 0;
	}
	if (i_col == 0)
	{
		values[0] = 0;
		values[2] = 0;
	}
	min = ft_min(values) + 1;
	return (min);
}

int	ft_min(int *values)
{
	int	i;
	int	min;

	min = 2147483647;
	i = 0;
	while (i < 3)
	{
		if (values[i] < min)
		{
			min = values[i];
		}
		i++;
	}
	return (min);
}
