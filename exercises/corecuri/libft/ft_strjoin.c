/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:58:05 by tbornema          #+#    #+#             */
/*   Updated: 2023/02/03 13:57:03 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)

{

	char	*newstr;
	int		len;
	
	len = (ft_strlen(s1) + ft_strlen(s2));
	newstr = malloc((len +1) * sizeof(newstr));
	if (!newstr)
		return NULL;
	ft_strcpy(newstr, (char *)s1);
	ft_strcat(newstr, (char *)s2);
	return (newstr);
}
