#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	x[] = "abcdefghijklmnopqrstuvwxyz{|";
	char	*z;

	z = ft_strupcase(x);
	printf("output\n%s\n", x);
	printf("expect\nABCDEFGHIJKLMNOPQRSTUVWXYZ{|\n");
	if (z == x)
		printf("The function returns str\n");
	return (0);
}
