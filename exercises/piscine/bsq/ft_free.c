/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 22:53:29 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/13 23:19:19 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	ft_freechar(char **map, int i_row, int row)
{
	while (i_row < row)
	{
		free(map[i_row]);
		i_row++;
	}
	free(map);
}

void	ft_freeint(int **map, int i_row, int row)
{
	while (i_row < row)
	{
		free(map[i_row]);
		i_row++;
	}
	free(map);
}
