#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char dest[100];
	char *src;
	char *src_base;
	int i;

	src_base = "Hello, ";
	src = "hashinhayeong";

	i = 0;
	while (i < 14)
	{
		dest[i] = src_base[i];
		i++;
	}
	printf("%s\n", ft_strncat(dest, src, 6));
}
