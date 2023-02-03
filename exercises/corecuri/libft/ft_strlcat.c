/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:58:42 by tbornema          #+#    #+#             */
/*   Updated: 2023/02/02 13:37:48 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)

{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	dstlen = strlen(dst);
	srclen = strlen(src);
	i = dstlen;
	j = 0;
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	
	while (src[j] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dstlen + srclen);
}
/*
int	main()
{
	char src[] = "1234567890\0";
	char dst[] = "abcdefghij\0";
	size_t	size = 9;
	printf("Dst: %s\nSrc: %s\nSize: %d\n\n\n", dst, src, size);
	ft_strlcat(dst, src, size);
	printf("Dst: %s\nSrc: %s\nSize: %d\n\n\n", dst, src, size);
}
*/