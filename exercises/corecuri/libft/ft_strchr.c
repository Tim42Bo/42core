/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 06:29:16 by honeybadger       #+#    #+#             */
/*   Updated: 2023/02/03 15:02:24 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

