/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parselib.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skruppa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 09:43:12 by skruppa           #+#    #+#             */
/*   Updated: 2022/07/10 09:43:15 by skruppa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


char	ft_parsetens(char *cleandict, char *ptr, int len)

{
	int	i;
	int	flag;
	i = 0;
	if (len == 2) 
	{
		while (cleandict[i] != '\0')
		{
			if ((len == 2) && (ptr[0] == '0') && (ptr[1] == '0'))
			{
				return (0);
			}
			if ((len == 2) && (ptr[0] >= '2') && (ptr[1] > '0'))
			{
				ft_parse20(cleandict, ptr, 2);
				return (0);
			}
			if ((len == 2) && (ptr[0] == '0'))
			{
				ft_parseones(cleandict, ptr+1, 1);
				return (0);
			}
			if ((cleandict[i] == ptr[0]) && (cleandict[i+1] == ptr[1]))
			{
				i += 3;
				flag = 0;
				if (ptr[1] == '0')
				{
					
				}
				if (ptr[0] >= '2')
				{
					flag = 1;
					
				}
				while (cleandict[i] != '\n')
				{
					ft_putchar(cleandict[i]);
					i++;
				}
				if (flag == 0)
					return (0);
			}
			i ++;
		}
	}
	return (0);
}