/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 03:47:58 by honeybadger       #+#    #+#             */
/*   Updated: 2023/02/09 17:24:21 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	*ft_memchr(const void *s, int c, size_t n)
{
	while (s && n > 0)
	{
		if (*(char *)s == c)
			return (((char *)s));
		s++;
        n--;
	}
	return (NULL);
} */

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}

/* int main()
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	ft_memchr(s, 2 + 258, 3);
} */