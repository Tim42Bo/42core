#include <stdio.h>

int	main(int argc, char *argv[])
{
	void	*outputselfmade;
	void	*outputstandard;
	*outputselfmade = (ft_(argv[1])(argv[2]));
	*outputstandard = ((argv[1])(argv[2]));

	printf("outputselfmade:	%s/n");
	printf("outputstandard:	%s/n");
}