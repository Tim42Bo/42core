/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_form.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skruppa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 13:26:51 by skruppa           #+#    #+#             */
/*   Updated: 2022/07/09 13:27:30 by skruppa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_numeric(char *n)
{
	int	i;

	i = -1;
	while (n[++i] != '\0')
	{
		if ((n[i] < '0' || n[i] > '9'))
		{
			return (0);
		}
	}
	return (1);
}
