#include "header.h"

char	*ft_trim(char *buf)
{
	int	count1;
	int	count2;
	char	comp[64*1024];
	
	
	count1 = 0;
	count2 = 0;
	while (buf[count1] != '\0') // search until array end
	{
		while (buf[count1] == ' ') // SEARCH CHARACTER
			count1 ++;
		comp[count2] = buf[count1];
		count2++;
		count1++;
		
		
	}
	ft_strcpy(buf, comp);
	return (buf);
}