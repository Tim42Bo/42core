/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 09:49:01 by tbornema          #+#    #+#             */
/*   Updated: 2022/06/25 15:31:55 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
			if ((a == 1 && b == 1) || (a == y && b == x))
				ft_putchar('o');
			else if ((a == 1 && b == x) || (a == y && b == 1))
				ft_putchar('o');
			else if ((a == 1) || (a == y))
				ft_putchar('-');
			else if ((b == 1) || (b == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
