/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 20:53:43 by tbornema          #+#    #+#             */
/*   Updated: 2022/06/26 14:34:07 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	numeric(char *n)
{
	int	i;

	i = -1;
	while (n[++i] != '\0')
	{
		if ((n[i] < '0' || n[i] > '9'))
		{
			return (0);
		}
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;
	int	i;

	if ((argc != 3) || numeric(argv[1]) == 0 || numeric(argv[2]) == 0)
	{
		write(1, "Only 2 and numeric (0-9) arguments are allowed\n", 47);
		return (0);
	}
	x = 0;
	y = 0;
	i = -1;
	while (argv[1][++i] != '\0')
		x = x * 10 + argv[1][i] - '0';
	i = -1;
	while (argv[2][++i] != '\0')
		y = y * 10 + argv[2][i] - '0';
	rush(x, y);
}
