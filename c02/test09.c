#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	x[] = "salUt, coMmEnt tu Vas ? 42mOTs quarAnte-deux; cinquante+et+un";
	char	*z;

	printf("prev\n%s\n", x);
	z = ft_strcapitalize(x);
	printf("latter\n%s\n", x);
	printf("expect\nSalut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un\n");	
	if (z == x)
	{
		printf("The function returns str\n");
	}
	return (0);
}

