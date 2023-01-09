/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:21:06 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/14 12:33:19 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <string.h>
#include <stdio.h> */

char	*ft_strncat(char *dest, char *src, unsigned int nb)

{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int myatoi(char *argv)
{
    int i;
    int sign;
    int number;

    sign = 1;
    i = 0;
    number = 0;

    if (argv[0] == '-')
    {
        sign = -1;
        i++;
    }
    while (argv[i] != '\0')
    {
        number = number * 10 + argv[i] - '0';
        i++;
    }
    return (sign * number);
}

int main(int argc, char *argv[])

{
    unsigned int nb;
    nb = myatoi(argv[3]);
    ft_strncat(argv[1], argv[2], nb);

    printf("dest: %s", argv[1]);
    printf("\n");
}*/
