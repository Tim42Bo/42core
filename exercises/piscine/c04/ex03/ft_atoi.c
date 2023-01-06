/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:18:56 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/07 17:22:46 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "header.h"

int	ft_atoi(char *str)

{
	int	i;
	int	sign;
	int	number;

	number = 0;
	sign = 1;
	i = 0;
	while (str[i] == '\n' || str[i] == '\v' || str[i] == ' '
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\t')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		number = number * 10 + str[i] - 48;
		i++;
	}
	return (sign * number);
}
/*
int	main(int argc, char *argv[])

{
	int	output;
	output = ft_atoi(argv[1]);
	printf("output: %d\n", output);
}*/
