/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:24:08 by phorn             #+#    #+#             */
/*   Updated: 2022/06/25 12:27:46 by jkuhn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char *c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = 0;
	while (a++ < y)
	{
		b = 0;
		if (x <= 0)
			break ;
		while (b++ < x)
		{
			if ((a == 1 && b == 1) || (a == y && b == x && y != 1 && x != 1))
				ft_putchar ("A");
			else if ((a == 1 && b == x) || (a == y && b == 1))
				ft_putchar ("C");
			else if ((a == 1) || (b == 1) || (a == y) || (b == x))
				ft_putchar ("B");
			else
				ft_putchar (" ");
		}
		ft_putchar ("\n");
	}
}
