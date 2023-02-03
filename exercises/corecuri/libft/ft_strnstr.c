/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 03:36:02 by honeybadger       #+#    #+#             */
/*   Updated: 2023/02/02 13:17:48 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	char	*tmp;

	tmp = (char *)haystack;
	i = 0;
	if (needle[0] == '\0')
		return (tmp);
	while (tmp[i] != '\0')
	{
		j = 0;
		while (tmp[i + j] == needle[j] && (i + j) < len)
		{
			if (tmp[i + j] == '\0' && needle[j] == '\0')
				return (&tmp[i]);
			j++;
		}
		if (needle[j] == '\0')
			return (&tmp[i]);
		i++;
	}
	return (0);
}