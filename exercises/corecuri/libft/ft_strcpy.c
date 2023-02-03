/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:38:48 by tbornema          #+#    #+#             */
/*   Updated: 2023/02/03 13:44:39 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)

{
	int	i;

	i = -1;
	while (src[++i] != '\0')
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
