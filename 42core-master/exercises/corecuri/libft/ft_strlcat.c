/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:58:42 by tbornema          #+#    #+#             */
/*   Updated: 2023/01/06 17:24:18 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)

{
	size_t	i;
	size_t	size;

	i = 0;
	
	if (dstsize)
	{
		size = ft_strlen(dstsize - 1)
		while (dst[i] != 0 && i < size)
		{
			i++;
		}

		dst[i] = 0;
	}
	while (src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}	
	return (i);
}
