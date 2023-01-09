/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaudt-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 09:42:30 by vdaudt-d          #+#    #+#             */
/*   Updated: 2022/06/25 15:04:58 by vdaudt-d         ###   ########.fr       */
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
			if ((a == 1 && b == 1) || (a == 1 && b == x))
				ft_putchar("A");
			else if ((a == y && b == 1) || (a == y && b == x))
				ft_putchar("C");
			else if ((a == 1) || (b == 1) || (a == y) || (b == x))
				ft_putchar("B");
			else
				ft_putchar(" ");
		}
		ft_putchar("\n");
	}
}
