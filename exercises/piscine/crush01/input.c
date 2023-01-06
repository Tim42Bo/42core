/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 19:58:53 by tbornema          #+#    #+#             */
/*   Updated: 2022/07/01 19:58:56 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int checkinput(char *n);
void    ft_putchar(char c[]);

int	main(int argc, char *argv[])
{
	int	x;
	int	y;
	int	i;

	if ((argc != 17) || checkinput(argv[1]) == 0 || checkinput(argv[2]) == 0 || checkinput(argv[3]) == 0
        || checkinput(argv[4]) == 0 || checkinput(argv[5]) == 0 || checkinput(argv[6]) == 0
        || checkinput(argv[7]) == 0 || checkinput(argv[8]) == 0 || checkinput(argv[9]) == 0
        || checkinput(argv[10]) == 0 || checkinput(argv[11]) == 0 ||checkinput(argv[12]) == 0 
        || checkinput(argv[13]) == 0 || checkinput(argv[14]) == 0 || checkinput(argv[15]) == 0
        || checkinput(argv[16]) == 0)
	{
		ft_putchar("Error!\n");
		return (0);
	}
	x = 0;
	y = 0;
	i = -1;
	while (argv[1][++i] != '\0')
		x = x * 10 + argv[1][i] - '0';
	i = -1;
	while (argv[2][++i] != '\0')
		y = y * 10 + argv[2][i] - '0';
}
