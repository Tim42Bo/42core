/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:45:07 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/07 19:14:26 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)

{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (str[i] == 0)
		{
			flag = 1;
		}
		else if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		else
			flag = 1;
		i++;
	}
	return (flag);
}
/*
int main()

{
	int result;
	char arr[] = "0\x04xyz\0";

	result = ft_str_is_printable(arr);
	printf("result: %i\n", result);
	return (0);
}*/
