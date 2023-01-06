/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:35:12 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/07 16:40:04 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>*/

char	*ft_strstr(char *str, char *to_find)

{
	int	i;
	int	flag;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			flag = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					flag = 1;
				i++;
			}
			if (flag == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
/*
int	main(int argc, char *argv[])

{
	printf("%s\n", ft_strstr(argv[1], argv[2]));
	printf("%s\n", strstr(argv[1], argv[2]));
	return (0);
}*/
