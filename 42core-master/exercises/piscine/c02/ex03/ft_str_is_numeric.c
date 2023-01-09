/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 08:13:14 by tbornema          #+#    #+#             */
/*   Updated: 2022/12/05 15:52:49 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 0)
			return (1);
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}

/*int	main()

{
	int result;
	char arr[] = "223a3";
	result = ft_str_is_numeric(arr);
	printf("result: %i\n", result);
}*/
