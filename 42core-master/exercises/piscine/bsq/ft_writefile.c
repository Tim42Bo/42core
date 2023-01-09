/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writefile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:37:36 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/13 21:09:42 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <functions.h>

int	ft_writefile(char *array)

{
	int		total;
	int		file;

	total = ft_strlen(array);
	file = open("stdinboard.txt", O_CREAT | O_TRUNC | O_WRONLY, 0777);
	write(file, array, total);
	close(file);
	return (0);
}
