#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char *src = "123456";
	char dest[20];

	size_t ret = ft_strlcpy(dest, src, 13);
	printf("dest = %s\nreturn = %zu", dest, ret);
}
/*
%zu는 size_t에 대응하는 형식 지정자
size_t는 unsigned int이며 문자열이나 메모리의 사이즈를 나타낼 때 사용
*/
