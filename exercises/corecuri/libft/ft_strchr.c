/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 06:29:16 by honeybadger       #+#    #+#             */
/*   Updated: 2023/02/09 15:03:27 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* (char *)x  is a pointer to an char in an array*/

#include "libft.h"

char	*ft_strchr(const char *s, int character)
{
	while (*s)
	{
		if (*s == (char)character)
			return ((char *)s);
		s++;
	}
	if (character == 0)
		return ((char *)s);
	return (0);
}
