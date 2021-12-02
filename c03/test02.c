#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dst_test[9] = "hello";
	char	src_test[] = " me";
	char	*ret_test;
	printf("prev\ndst\t%s\nsrc\t%s\n", dst_test, src_test);
	ret_test = ft_strcat(dst_test, src_test);
	printf("latter\ndst\t%s\nsrc\t%s\n", dst_test, src_test);
	if (ret_test == dst_test)
		printf("Function returns dest\n");
	return (0);
}
