#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ{|";
	char	*z;

	z = ft_strlowcase(x);
	printf("output\n%s\n", x);
	printf("expect\nabcdefghijklmnopqrstuvwxyz{|\n");
	if (z == x)
	{
		printf("The function returns str\n");
	}	
	return (0);
}
