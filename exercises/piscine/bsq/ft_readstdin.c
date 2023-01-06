/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readstdin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:01:02 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/13 23:17:31 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

char	*ft_readstdin(void)
{
	char	buf[512];
	char	*content;
	int		size_of_current;
	char	*tmp;

	size_of_current = 0;
	tmp = "";
	content = "";
	ft_memset(buf, 0, sizeof (buf));
	while (read(0, buf, sizeof (buf) - 1))
	{
		size_of_current = ft_strlen(content) + ft_strlen(buf);
		tmp = malloc(size_of_current + 1);
		ft_memset(tmp, 0, size_of_current + 1);
		if (content)
			ft_strcpy(tmp, content);
		ft_strcat(tmp, buf);
		if (content)
			content = tmp;
		tmp[size_of_current] = 0;
		ft_memset(buf, 0, sizeof(buf));
	}
	close(0);
	return (content);
}
