/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:57:59 by tbornema          #+#    #+#             */
/*   Updated: 2023/02/03 17:00:54 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)

{
	char	*cpystr;
	int		i;
	int		j;
	int		k;
	int		end;

	i = 0;
	j = 0;
	k = 0;
	end = ft_strlen(s1 - 1);

	while (s1[i] == set[k])
	{
		if (s1[i] == '\0')
		{
			i = 0;
		}
		i++;
			if (s1[i] == '\0')
				return ((char *)s1);
	}
	while (s1[end] == *set)
	end--;
	cpystr = malloc((s1[i] + s1[end] + 1) * sizeof(cpystr));
	while (s1[i] != '\0')
	{
		cpystr[j] = s1[i];
		j++;
		i++;
	}
	cpystr[j] = '\0';
	return (cpystr);
}

// int main()
// {
// 	printf("%s\n", ft_strtrim("    xxxxtest", " x"));
// }