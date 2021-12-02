#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	dest[] = "foo bar baz";
	char	src[] = "bar";
	printf("dest\t%s\nsrc\t%s\nres\t%s\n", dest, src, ft_strstr(dest, src));
	if (0 == ft_strstr(dest, "i"))
		printf("The function returns NULL if cannot match\n");
	if (dest == ft_strstr(dest, ""))
		printf("The function returns dest if src is an empty string\n");
	return (0);
}
