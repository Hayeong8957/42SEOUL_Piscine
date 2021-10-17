#include <stdio.h>

char *ft_strcapitalize(char *str);

int	main(void)
{
	char *str_base;
	char str_cap[61];
	int	index;

	str_base = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	index = 0;
	while (index < 62)
	{
		str_cap[index] = str_base[index] + 0;
		index++;
	}
	ft_strcapitalize(&str_cap[0]);
	printf("%s\n", str_cap);
}
