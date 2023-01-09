/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:31:12 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/01 11:02:35 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 0)
			return (1);
		if (!(str[i] >= 97 && str[i] <= 122))
			return (0);
		i++;
	}
	return (1);
}

/*int main()

{
	int	result;

	char arr[] = "abcAc";
	result = ft_str_is_lowercase(arr);
	printf("result: %i\n", result);
}*/
