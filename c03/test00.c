#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("%s\t%s\t%d\n", "abc", "abc", ft_strcmp("abc", "abc"));
	printf("%s\t%s\t%d\n", "abc", "abcd", ft_strcmp("abc", "abcd"));
	printf("%s\t%s\t%d\n", "abC", "abc", ft_strcmp("abC", "abc"));
	printf("%s\t%s\t%d\n", "abc", "abC", ft_strcmp("abc", "abC"));

	printf("%s\t%s\t%d\n", "abc", "abc", strcmp("abc", "abc"));
	printf("%s\t%s\t%d\n", "abc", "abcd", strcmp("abc", "abcd"));
	printf("%s\t%s\t%d\n", "abC", "abc", strcmp("abC", "abc"));
	printf("%s\t%s\t%d\n", "abc", "abC", strcmp("abc", "abC"));
	return (0);
}
