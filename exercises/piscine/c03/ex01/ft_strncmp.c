/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:44:15 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/07 16:13:09 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "header.h"

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	n;
	int	i;

	i = 0;
	n = 0;
	while (dest[n] != '\0')
		n++;
	while (src[i] != '\0')
	{
		dest[n] = src[i];
		n++;
		i++;
	}
	dest[n] = '\0';
	return (dest);
}


int	main(void)

{
	char	a[] = "ABCdz";
	char	b[] = "ABCdezfg";

	printf("%d\n", ft_strncmp(a, b, 3));
	printf("%d\n", ft_strncmp(a, b, 8));
	printf("%d\n", strncmp(a, b, 3));
	printf("%d\n", strncmp(a, b, 8));
	printf("%p\t%p\n", a, b);
	printf("%p\t%p\n", a, b);
}
