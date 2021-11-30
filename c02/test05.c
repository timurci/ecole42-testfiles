#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char *x = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *y = "ABCDEFGHIJKLMNOPQrSTUVWXYZ";

	if (ft_str_is_uppercase(x))
		printf("The function returns 1 for uppercase letters\n");
	if (!ft_str_is_uppercase(y))
		printf("The function returns 0 for lowercase letters\n");
	if (ft_str_is_uppercase(""))
		printf("The function returns 1 for empty string\n");
	return (0);
}
