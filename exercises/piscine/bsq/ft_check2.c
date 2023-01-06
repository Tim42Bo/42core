/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:02:27 by akekesi           #+#    #+#             */
/*   Updated: 2022/07/13 23:30:38 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <functions.h>

int	ft_check_main(char *path, char *chars)
{
	int	col;
	int	row;

	if (ft_check_open(path))
	{
		ft_get_chars(path, chars);
		col = ft_get_col(path);
		row = ft_get_row(path);
		if (ft_check_main_info(path, chars))
		{
			if (ft_check_main_map(path, chars, row, col))
				return (1);
		}
	}
	write (1, "map error\n", 10);
	return (0);
}

int	ft_check_main_info(char *path, char *chars)
{
	int		check;

	check = 1;
	check *= ft_check_info(path);
	check *= ft_check_chars(chars);
	check *= ft_check_row(path);
	return (check);
}

int	ft_check_main_map(char *path, char *chars, int row, int col)
{
	int		i;
	int		check;
	int		fd;
	char	c[1];

	check = 1;
	fd = open(path, O_RDONLY);
	i = ft_length_to_char(path, '\n');
	while (i--)
	{
		read(fd, c, 1);
		if (i > 0)
			check *= ft_check_is_printable(c[0]);
	}
	while (i < row * col)
	{
		read(fd, c, 1);
		i++;
		if ((i + 1) % (col + 1) != 0)
			check *= ft_check_25(chars, c[0]);
		if (c[0] == '\n' && ((i + 1) % (col + 1)) != 0)
			check = 0;
	}
	close(fd);
	return (check);
}

int	ft_check_25(char *chars, char c)
{
	int	check;

	check = ft_check_is_chars(chars, c);
	check *= ft_check_is_printable(c);
	return (check);
}

int	ft_check_is_chars(char *chars, char c)
{
	if (chars[0] == c)
		return (1);
	if (chars[1] == c)
		return (1);
	return (0);
}
