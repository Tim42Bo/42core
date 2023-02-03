/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 04:04:02 by tbornema          #+#    #+#             */
/*   Updated: 2023/01/19 05:07:49 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)

{
    unsigned char   *ss1;
    unsigned char   *ss2;

    ss1 = (unsigned char *)s1;
    ss2 = (unsigned char *)s2;
    
    while (n && *ss1 == *ss2)
    {
        ++ss1;
        ++ss2;
        --n;
    }
    if (n)
        return (*ss1 - *ss2);
    return (0);
}

#include <stdio.h>
#include <string.h>

int		main(void)
{
	printf("ft_memcmp : %d\n", ft_memcmp("aBc", "aBC", 3));
	printf("memcmp : %d\n", memcmp("aBc", "aBC", 3));
}