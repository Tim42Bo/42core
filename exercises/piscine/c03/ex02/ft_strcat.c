/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:22:24 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/07 12:52:37 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>*/
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	n;
	int	i;

	i = 0;
	n = 0;
	while (dest[n] != '\0')
		n++;
	while (src[i] != '\0')
	{
		dest[n] = src[i];
		n++;
		i++;
	}
	dest[n] = '\0';
	return (dest);
}

int main(int argc, char *argv[])

{
	if (argc > 1)
    ft_strcat(argv[1], argv[2]);
    printf("dest: %s\n", argv[1]);
	//strcat(argv[1], argv[2]);
	//printf("dest2: %s\n", argv[1]);
    return (0);
}
