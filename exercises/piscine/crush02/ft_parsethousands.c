#include "header.h"

char	ft_parsethousands(char *cleandict, char *ptr, int len)

{
	int	i;
	int	flag;
	char	tmp[11];
	
	i = 0;
	if (len == 4) 
	{
		ft_strcpy(tmp, ptr);
		flag = ft_parseones(cleandict, tmp, 1);
		ft_putstr(" ");
		i = 0;
		while (cleandict[i] != '\0')
		{		
			ptr[0] = '1';
			ptr[1] = '0';
			ptr[2] = '0';
			ptr[3] = '0';
			if ((cleandict[i] == ptr[0]) && (cleandict[i+1] == ptr[1]) && (cleandict[i+2] == ptr[2]) && (cleandict[i+3] == ptr[3]))
			{
				i += 5;
				flag = 0;
				while (cleandict[i] != '\n')
				{
					ft_putchar(cleandict[i]);
					i++;
				}
				ft_strcpy(ptr, tmp);
				ft_putstr(" ");
				ft_parsehundreds(cleandict, ptr+1, 3);
				if (flag == 0)
					return (0);
			}
			i ++;
		}
	}
	return (0);
}