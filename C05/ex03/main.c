#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int a, b, c;
	a = ft_recursive_power(2, 3);
	b = ft_recursive_power(3, 3);
	c = ft_recursive_power(2, 4);
	printf("%d\n%d\n%d\n", a, b, c);
}
