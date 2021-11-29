#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int len);

int	main(void)
{
	char	x[] = "rrrr";
	char	y[] = "zzzzzzzzzzzz";
	char	*z;
	int		size;
	int		index;

	size = 6;
	printf("prev\n y: %s\n", y);
	z = ft_strncpy(y, x, size);
	printf("latter\n y: %s\n", y);
	if (z == y)
		printf("The function successfuly returns dest\n");
	else
		printf("The function does not return dest\n");
	index = strlen(x);
	while (index < size)
	{
		if (y[index++] != '\0')
		{
			printf("dest is not completely filled with null terminator\n");
		}
	}
}
