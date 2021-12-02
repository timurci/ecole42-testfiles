#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("%d\n", ft_strncmp("abc","abc", 2));
	printf("%d\n", ft_strncmp("abc","abc", 3));
	printf("%d\n", ft_strncmp("abc","abc", 4));	
	printf("%d\n", ft_strncmp("aBc","abc", 1));
	printf("%d\n", ft_strncmp("abc","aBc", 3));
	printf("%d\n", ft_strncmp("ab","abc", 3));
	return (0);
}
