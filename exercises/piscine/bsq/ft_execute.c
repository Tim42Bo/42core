/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:13:00 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/13 22:45:00 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	ft_execute(char *path, char *chars)

{
	int		row;
	int		col;

	row = ft_get_row(path);
	col = ft_get_col(path);
	ft_get_chars(path, chars);
	ft_print_main(path, row, col, chars);
}
