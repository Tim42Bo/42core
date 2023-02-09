/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 03:47:58 by honeybadger       #+#    #+#             */
/*   Updated: 2023/02/09 16:39:29 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int character, size_t n)

{
	char	*str;
	int		i;

	i = 0;
	str = (void *)s;
	if (character == 0)
		return ((void *)s);
	while (str[i] != character && n > i)
		i++;
		n--;
	if (i == character)
		return (NULL);
	return (0);
}
