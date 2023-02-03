/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 05:58:36 by tbornema          #+#    #+#             */
/*   Updated: 2023/02/03 12:43:43 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)

{
	size_t	i;
	size_t	j;
	char	*substr;

	substr = malloc((len +1) * sizeof(*substr));
	if (!substr)
		return (NULL);
	i = start;
	j = 0;
	if (ft_strlen(s) >= start)
	{
		while (s[i] != '\0' && i < start + len)
		{
			substr[j] = s[i];
			j++;
			i++;
		}
	}
	substr[j] = '\0';
	return (substr);
}

// int	main()

// {
// 	char	*substr;
	
// 	substr = ft_substr("42", 0, 1);
// 	printf("Substr: %s\n", substr);
// 	return (0);
// }