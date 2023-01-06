/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:47:46 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/07 13:07:54 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "header.h"

int	ft_strcmp(char *s1, char *s2)

{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}

/*int	main(void)

{
	char	a[] = "ABC";
	char	b[] = "ABC";
	int result;

	result = ft_strcmp(a, b);
	if (result == -1)
	{
		printf("s1 is smaller then s2: %d\n", result);
	}
	result = ft_strcmp(a, b);
	if (result == 0)
	{
		printf("s1 is equal to s2: %d\n", result);
	}
	result = ft_strcmp(a, b);
	if (result == 1)
	{
	printf("s1 is bigger then s2: %d\n", result);
	}
	printf("standard strcmp: %d\n", strcmp(a, b));
}*/
