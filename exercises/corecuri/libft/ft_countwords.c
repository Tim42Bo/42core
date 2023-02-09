/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:42:04 by tbornema          #+#    #+#             */
/*   Updated: 2023/02/09 15:15:44 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countwords(char const *s, char c, size_t i)
{
	size_t	count;

	count = 1;
	while (s[i] != '\0')
	{
		i = ft_skipc(s, c, i);
		i = ft_indexlen(s, c, i);
		count++;
	}
	return (count);
}
