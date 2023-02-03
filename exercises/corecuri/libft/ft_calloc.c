/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 04:51:44 by tbornema          #+#    #+#             */
/*   Updated: 2023/02/02 14:19:58 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	len;

	len = nmemb * size;
	ptr = malloc(len);
	if (!ptr)                       // !ptr == ptr <= 0
		return (NULL);
	ft_bzero(ptr, len);
	return (ptr);
}