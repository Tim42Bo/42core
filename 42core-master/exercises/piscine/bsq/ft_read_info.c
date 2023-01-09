/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_info.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:33:38 by akekesi           #+#    #+#             */
/*   Updated: 2022/07/13 23:04:23 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <functions.h>

int	ft_length_to_char(char *path, char c_to)
{
	int		i;
	int		fd;
	char	c[2];

	c[0] = '0';
	c[1] = '\0';
	fd = open(path, O_RDONLY);
	i = 0;
	while (c[0] != c_to)
	{
		read(fd, c, 1);
		i++;
	}
	close(fd);
	return (i);
}

int	ft_get_row(char *path)
{
	int		i;
	int		row;
	int		fd;
	char	c[2];

	c[0] = '0';
	c[1] = '\0';
	fd = open(path, O_RDONLY);
	row = 0;
	i = ft_length_to_char(path, '\n');
	while (i > 3)
	{
		row = row * 10 + (c[0] - '0');
		read(fd, c, 1);
		i--;
	}
	close(fd);
	return (row);
}

int	ft_get_col(char *path)
{
	int		col;
	int		fd;
	char	c[2];

	c[0] = '0';
	c[1] = '\0';
	fd = open(path, O_RDONLY);
	while (c[0] != '\n')
	{
		read(fd, c, 1);
	}
	read(fd, c, 1);
	col = 0;
	while (c[0] != '\n')
	{
		read(fd, c, 1);
		col++;
	}
	close(fd);
	return (col);
}

void	ft_get_chars(char *path, char *chars)
{
	int		i;
	int		i_length;
	int		fd;
	char	c[2];

	c[0] = '0';
	c[1] = '\0';
	fd = open(path, O_RDONLY);
	i_length = ft_length_to_char(path, '\n') - 1;
	i = 0;
	while (i_length)
	{
		read(fd, c, 1);
		i_length--;
		if (i_length < 3)
		{
			chars[i] = c[0];
			i++;
		}
	}
	close(fd);
}
