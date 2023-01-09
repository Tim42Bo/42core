/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akekesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:35:57 by akekesi           #+#    #+#             */
/*   Updated: 2022/07/13 20:26:58 by akekesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <functions.h>

int	ft_check_open(char *path)
{
	int	fd;

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	return (1);
}

int	ft_check_chars(char *chars)
{
	int	i;
	int	j;

	i = 0;
	while (i < 2)
	{
		j = i + 1;
		while (j < 3)
		{
			if (chars[i] == chars[j] || chars[i] == '\n' || chars[j] == '\n')
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_is_printable(char c)
{
	if (c < 32)
	{
		return (0);
	}
	return (1);
}

int	ft_check_info(char *path)
{
	int	length;

	length = ft_length_to_char(path, '\n');
	if (length < 5)
		return (0);
	return (1);
}

int	ft_check_row(char *path)
{
	int		i;
	int		fd;
	char	c[2];

	c[0] = '0';
	c[1] = '\0';
	fd = open(path, O_RDONLY);
	i = ft_length_to_char(path, '\n');
	while (i > 3)
	{
		if (c[0] < '0' || '9' < c[0])
			return (0);
		i--;
	}
	close(fd);
	return (1);
}
