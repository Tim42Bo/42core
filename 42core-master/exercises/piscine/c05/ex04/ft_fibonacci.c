/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:21:46 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/11 12:32:24 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int ft_fibonacci(int index)

{
	if (index == 0)
	{
		
		return (0);
	}
	else if (index ==1)
	{
		return (1);
	}
	else
		return (ft_fibonacci(index -1) + ft_fibonacci(index - 2));
}

int	main()
{
	int	x = 12;
	printf("%d\n", ft_fibonacci(x));
	return (0);
}
