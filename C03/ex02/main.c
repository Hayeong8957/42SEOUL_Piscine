#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char dest[100];
	char *src;
	char *src_base;
	int i;

	src_base = "Hello, ";
	src = "world!";

	i = 0;
	while (i < 8)
	{
		dest[i] = src_base[i];
		i++;
	}

	printf("%s\n", ft_strcat(dest, src));
}
