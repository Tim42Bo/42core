#include "header.h"


char	ft_parsehundreds(char *cleandict, char *ptr, int len)

{
	int	i;
	int	flag;
	char	tmp[11];
	
	i = 0;
	if (len == 3) 
	{
		ft_strcpy(tmp, ptr);
		flag = ft_parseones(cleandict, tmp, 1);
		ft_putstr(" ");
		i = 0;
		if ((len == 3) && (ptr[0] == '0') && (ptr[1] == '0'))
			{
				ft_parseones(cleandict, ptr+2, 1);
				return (0);
			}
		while (cleandict[i] != '\0')
		{		
			ft_strcpy(ptr, "100");
			if ((cleandict[i] == ptr[0]) && (cleandict[i+1] == ptr[1]) && (cleandict[i+2] == ptr[2]))
			{
				i += 4;
				flag = 0;
				while (cleandict[i] != '\n')
				{
					ft_putchar(cleandict[i]);
					i++;
				}
				ft_strcpy(ptr, tmp);
				ft_putstr(" ");
				ft_parsetens(cleandict, ptr+1, 2);
				if (flag == 0)
					return (0);
			}
			i ++;
		}
	}
	return (0);
}