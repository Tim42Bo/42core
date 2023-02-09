/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strindexdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:35:26 by tbornema          #+#    #+#             */
/*   Updated: 2023/02/09 13:35:26 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strindexdup(const char *s1, char c, size_t i)

{
	char	*copy;
	size_t	len;

	len = ft_wordlen(s1, c, i);
	copy = (char *)malloc(sizeof(*copy) * len);
	if (!copy)
		return (NULL);
	copy = ((char *)ft_memcpy(copy, s1 + i, len));
	copy[len] = '\0';
	return (copy);
}
