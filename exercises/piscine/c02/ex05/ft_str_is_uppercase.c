/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:03:29 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/01 11:19:43 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
			return (0);
		if (str[i] == 0)
			return (1);
		i++;
	}
	return (1);
}

/*int main ()

{
	int result;
	char arr[] = "ABC";

	result = ft_str_is_uppercase(arr);
	printf("result: %i", result);
	return (0);
}*/
