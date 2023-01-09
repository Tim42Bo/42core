/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:26:36 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/01 12:32:51 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] +32;
		i++;
	}
	return (str);
}
/*int main()

{
	char arr[] = "abcDeFG";

	printf("before: %s\n", arr);
	ft_strlowcase(arr);
	printf(" after: %s\n", arr);
	return (0);
}*/
