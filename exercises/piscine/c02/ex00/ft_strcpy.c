/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:21:41 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/07 19:13:49 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)

{
	int	i;

	i = -1;
	while (src[++i] != '\0')
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)

{
	char	a[] = "-abcdefg";
	char	b[] = "123456789";
	ft_strcpy(b, a);
	printf(" src: %s\ndest: %s\n", a, b);
}*/
