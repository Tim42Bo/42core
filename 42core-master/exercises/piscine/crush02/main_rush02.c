/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_rush02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skruppa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:08:39 by skruppa           #+#    #+#             */
/*   Updated: 2022/07/09 11:08:47 by skruppa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// https://projects.intra.42.fr/uploads/document/document/9362/numbers.dict

#include "header.h"

int	main(int argc, char **argv)
{
	int len;
	char dictarray[maxium_buffer_size];
	int fd;
	


	if (((argc < 2) && (ft_numeric(argv[1]) == 0)) || ((argc > 3) && ft_numeric(argv[2]) == 0))
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (argc == 2)
	{
		len = ft_strlen(argv[1]);
	
		

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		{
		ft_putstr("Failed to open and read the file.\n");
		exit(1);
		}
	}
	read(fd, dictarray, maxium_buffer_size);
	char *cleandictarray = ft_trim(dictarray);
	len = ft_strlen(argv[1]);
	ft_parseones(cleandictarray, argv[1], len);
	ft_parsetens(cleandictarray, argv[1], len);
	ft_parsehundreds(cleandictarray, argv[1], len);
	ft_parsethousands(cleandictarray, argv[1], len);
	ft_putstr("\n");

/*
	if (argc == 3)
		argv[1] is new reference dict. argv[2] is value 
		(str of char) to be converted 
	{
		len = ft_strlen(argv[2]);
		ptr1 = ft_malloc_int(len);
		if (ptr1 == NULL)
		{
			ft_putstr("2ndmemory allocation failed");
		}
		*ptr1 = ft_atoi(argv[2]);
		printf("2nd print:%llu\n", *ptr1);
		
	}*/
		return 0;
}
