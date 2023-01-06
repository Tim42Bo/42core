#include "header.h"


char	ft_parseones(char *cleandict, char *ptr, int len)

{
	int	i;
	int j;
	int	flag;

	i = 0;
	j = 0;
	if (len == 1)
	{
		while (cleandict[i] != '\0')
		{
			if (cleandict[i] == ptr[j])
			{
				i += 2;
				flag = 0;
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