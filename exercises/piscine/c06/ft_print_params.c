/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:01:20 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/11 18:01:22 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)

{
	int	counter;

	counter = 0;
	while (*str)
	{
		counter++;
	}
	return (counter);
}
int	main(int argc, char **argv)

{
	int	counter;
	int	i;

	i = 1;
	counter = 0;
	if (argc < 1)
	{
		return(0);
	}
	while (i <= argc)
	{
		counter = ft_strlen(argv[i]);
		write(1, argv[i], counter);
		write(1, "\n", 1);
		i++;
	}
	
	return (0);
}
