/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:04:22 by tbornema          #+#    #+#             */
/*   Updated: 2022/06/29 18:09:50 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *xp, int *yp)

{
	int	tmp;

	tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}

void	sortint(int *tab, int size)

{
	int	x;
	int	y;
	int	end;

	x = 0;
	end = size - 1;
	while (x < end)
	{
		y = 0;
		while (y < end)
		{
			if (tab[y] > tab[y + 1])
				swap(&tab[y], &tab[y + 1]);
			y++;
		}
		x++;
	}
}
