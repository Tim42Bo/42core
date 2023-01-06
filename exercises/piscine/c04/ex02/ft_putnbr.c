/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:23:05 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/07 17:46:15 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "header.h"

int	myatoi(char *argv);*/

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)

{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

/*int	main(int argc, char *argv[])

{
	int	converted;

	converted = myatoi(argv[1]);
	ft_putnbr(converted);
}*/
