/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:18:31 by tbornema          #+#    #+#             */
/*   Updated: 2023/02/09 13:18:31 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_indexlen(char const *s, char c, size_t i)

{
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	return (i);
}