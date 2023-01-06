/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:15:17 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/13 10:32:36 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <functions.h>

void	*ft_memset(void *s, int c, unsigned int len)

{
	unsigned char	*p;

	p = s;
	while (len--)
	{
		*p++ = (unsigned char) c;
	}
	return (s);
}
