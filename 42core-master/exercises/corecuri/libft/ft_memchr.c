/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 03:47:58 by honeybadger       #+#    #+#             */
/*   Updated: 2023/01/19 05:05:15 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memchr(const void *s, int character, size_t n)

{
	while (*s && n > 0)
	{
		if (*s == (char)character)
			return ((char *)s);
		s++;
        n--;
	}
	if (character == 0)
		return ((void *)s);
	return (0);
}