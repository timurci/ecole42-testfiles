#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	x[] = "abc";
	char	z[] = "xyz";
	char	*d;
	printf("prev\ndest: %s\nsrc: %s\n", z, x);
	d = ft_strcpy(z, x);
	printf("latter\ndest: %s\nsrc: %s\n", z, x);
	if(z == d)
		printf("Function successfuly returned dest.\n");
	else
		printf("Function does not return dest string.\n");
	return (0);
}
