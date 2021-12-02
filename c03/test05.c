#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char		dest[20] = "Hello";
	char		src[] = " World! How are you?";
	unsigned int	ret_value;
	
	printf("prev\ndest\t%s\nsrc\t%s\n", dest, src);
	ret_value = ft_strlcat(dest, src, 20);
	printf("latter\ndest\t%s\nsrc\t%s\nret\t%u\n", dest, src, ret_value);
	return (0);
}
