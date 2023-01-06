/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:17:32 by tbornema          #+#    #+#             */
/*   Updated: 2022/12/06 11:09:08 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)

{
	unsigned char	*p;

	p = s;
	while (len--)
	{
		*p++ = (unsigned char) c;
	}
	return (s);
}
