#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{	
	int	flag;
	
	flag = ft_str_is_alpha("abcdefghijklmnopqrstuvwxyz");
	if (1 == flag)
		printf("The function works for lowercase alphabet %d\n", flag);
	flag = ft_str_is_alpha("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	if (1 == flag)
		printf("The function works for uppercase alphabet %d\n", flag);
	flag = ft_str_is_alpha("#-*01&/");
	if (0 == flag)
		printf("The function works for non-alphabetical characters %d\n", flag);
	flag = ft_str_is_alpha("");
	if (1 == flag)
		printf("The function works for an empty string %d\n", flag);	
}
