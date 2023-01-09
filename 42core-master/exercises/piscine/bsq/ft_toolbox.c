/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toolbox2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:29:04 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/13 19:06:07 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <functions.h>

char	*ft_strcat(char *dest, char *src)

{
	char	*tmp;

	tmp = dest;
	while (*tmp != '\0')
	{
		tmp++;
	}
	while (*src != '\0')
	{
		*tmp = *src;
		tmp++;
		src++;
	}
	*tmp = '\0';
	return (dest);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

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
