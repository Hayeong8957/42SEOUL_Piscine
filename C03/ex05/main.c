#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int	size);

int	main(void)
{
	char dest[100];
	char *src;
	char *src_base;
	int	i;

	src_base = "Hello, ";
	src = "World";

	i = 0;
	while (i < 7)
	{
		dest[i] = src_base[i];
		i++;
	}
	printf("%d\n", ft_strlcat(dest, src, 9));
	printf("%s\n", dest);
}
