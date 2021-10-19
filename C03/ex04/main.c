#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
	char string[20] = "aplaplaplapple";
	char* search = "app";
	char* result = NULL;

	result = ft_strstr(string, search);

	printf("string: %s\n", string);
	printf("search: %s\n", search);
	printf("result: %s\n", result);
}
