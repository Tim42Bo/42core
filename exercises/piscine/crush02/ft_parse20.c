#include "header.h"


char	ft_parse20(char *cleandict, char *ptr, int len)

{
	int	i;
	int	flag;
	char	tmp;
	
	i = 0;
	if (len == 2)
	{
		tmp = ptr[1];
		while (cleandict[i] != '\0')
		{
			
			ptr[1] = '0'; 
			if ((cleandict[i] == ptr[0]) && (cleandict[i+1] == ptr[1]))
			{
				i += 3;
				while (cleandict[i] != '\n')
				{
					ft_putchar(cleandict[i]);
					i++;
				}	
				ft_putstr(" ");
				ptr[1] = tmp;
				ft_parseones(cleandict, ptr+1, 1);
				flag = 0;
				if (flag == 0)
				{	
					return (0);
				}
				
			}
			i++;
		}
	}
	return (0);
}