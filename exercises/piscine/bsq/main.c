/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:57:52 by akekesi           #+#    #+#             */
/*   Updated: 2022/07/13 23:07:24 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <functions.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*path;
	char	chars[3];

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			if (i > 1)
				write(1, "\n", 1);
			path = argv[i];
			if (ft_check_main(path, chars))
				ft_execute(path, chars);
			i++;
		}
	}
	else if (argc == 1)
	{
		path = ft_readstdin();
		ft_writefile(path);
		path = "stdinboard.txt";
		ft_execute(path, chars);
	}
	return (0);
}
