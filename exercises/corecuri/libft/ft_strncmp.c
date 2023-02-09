/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:02:56 by honeybadger       #+#    #+#             */
/*   Updated: 2023/02/09 15:22:53 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *string1, const char *string2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)string1;
	s2 = (unsigned char *)string2;
	while (n && *s1 == *s2)
	{
		++s1;
		++s2;
		--n;
	}
	if (n)
		return (*s1 - *s2);
	return (0);
}
