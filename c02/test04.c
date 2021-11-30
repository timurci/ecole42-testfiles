#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char *x = "abcdefghijklmnopqrstuvwxyz";
	char *y = "abcdefghijklmnopqRstuvwxyz";

	if (ft_str_is_lowercase(x))
		printf("The function returns 1 for lowercase letters\n");
	if (!ft_str_is_lowercase(y))
		printf("The function returns 0 for uppercase letters\n");
	if (ft_str_is_lowercase(""))
		printf("The function returns 1 for empty string\n");
	return (0);
}
