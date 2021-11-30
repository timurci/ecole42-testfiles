#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	x[] = " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
	
	if (ft_str_is_printable(x))
	{
		printf("The function returns true for all printable characters\n");
	}

	if (ft_str_is_printable(""))
	{
		printf("The function returns true for empty string\n");
	}

	//need to check for non-printable characters too
	return (0);
}
