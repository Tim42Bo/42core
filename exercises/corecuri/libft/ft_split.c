/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:37:12 by tbornema          #+#    #+#             */
/*   Updated: 2023/02/09 13:37:12 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)

{
	char	**splitarray;
	size_t	count;
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	count = ft_countwords(s, c, i);
	splitarray = (char **)malloc(sizeof(char *) * count);
	if (!splitarray)
		return (NULL);
	i = 0;
	i = ft_skipc(s, c, i);
	while (s[i] != '\0')
	{
		i = ft_skipc(s, c, i);
		splitarray[j] = ft_strindexdup(s, c, i);
		j++;
		i = ft_indexlen(s, c, i);
	}
	splitarray[j] = (NULL);
	return (splitarray);
}

// int main()
// {

//     int i = 0;
//     char **array = ft_split("1,2,3", ',');
//     while (array[i] != 0)
//     {
//         printf("%s\n", array[i]);
//         i++;
//     }
//     return (0);
// }