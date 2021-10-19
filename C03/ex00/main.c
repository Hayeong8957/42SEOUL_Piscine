#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	str1 = "Hello";
	str2 = "Helloworld!";
	str3 = "abcde";
	str4 = "Hello";
	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d\n", ft_strcmp(str2, str1));
	printf("%d\n", ft_strcmp(str1, str3));
	printf("%d\n", ft_strcmp(str1, str4));
}
