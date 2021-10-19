#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	str1 = "Hello!!!";
	str2 = "Helloworld!";
	str3 = "Hefghijk";
	str4 = "H";
	printf("%d\n", ft_strncmp(str1, str2, 5));
	printf("%d\n", ft_strncmp(str1, str3, 4));
	printf("%d\n", ft_strncmp(str3, str4, 5));
}
