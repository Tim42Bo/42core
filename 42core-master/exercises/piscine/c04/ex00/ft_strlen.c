/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 10:08:24 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/08 10:09:34 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "header.h"

int	ft_strlen(char *str)

{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

/*int	main(int argc, char *argv[])

{
	printf("strlen: %d\n", ft_strlen(argv[1]));
	return (0);
}*/
