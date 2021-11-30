#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	int		flag;
	char	*rnd = "152.24"; 
	char	*nmr = "152124"; 
	char	*emp = ""; 

	flag = ft_str_is_numeric(rnd);
	if (0 == flag)
		printf("The function works for non-numeric strings %d\n", flag);
	flag = ft_str_is_numeric(nmr);
	if (1 == flag)
		printf("The function works for numeric strings %d\n", flag);
	flag = ft_str_is_numeric(emp);
	if (1 == flag)
		printf("The function works for empty strings %d\n", flag);
	return (0);
}
