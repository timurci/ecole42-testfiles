#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	dst_test[20] = "Hello";
	char	src_test[] = " world! How are you?";
	char	*ret_test;
	printf("prev\ndst\t%s\nsrc\t%s\n", dst_test, src_test);
	ret_test = ft_strncat(dst_test, src_test, 7);
	printf("latter\ndst\t%s\nsrc\t%s\n", dst_test, src_test);
	if (ret_test == dst_test)
		printf("Function returns dest\n");
	return (0);
}
