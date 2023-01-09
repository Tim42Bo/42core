/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:36:23 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/14 19:32:02 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_powerft(int nb, int power)
{
	if (power == 0)
		return (1);
	if (nb < 0)
		return (nb * -1);
	else if (power > 0)
    return (nb * ft_powerft(nb, power -1));
}

int	myatoi(char *str)

{
	int	i;
	int	x;
	int	sign;

	sign = 1;
	i = 0;
	x = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != 0)
	{
		x = x * 10 + str[i] - 48;
		i++;
	}
	return (sign * x);
}

int	main(int argc, char **argv)

{
	int	number1;
	int	number2;

	number1 = myatoi(argv[1]);
	number2 = myatoi(argv[2]);
	printf("%d power %d = %d\n", number1, number2, ft_powerft(number1, number2));
	return (0);
}
