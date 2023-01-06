/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:46:50 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/08 10:12:10 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

/*int	main(int argc, char *argv[])

{
	ft_putstr(argv[1]);
	return (0);
}*/
