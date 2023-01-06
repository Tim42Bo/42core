/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:56:57 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/01 12:25:44 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str [i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*int main()

{
	char arr[] = "abCDEFg";
	printf("before: %s\n", arr);
	ft_strupcase(arr);
	printf(" after: %s\n", arr);
	return (0);
}*/
