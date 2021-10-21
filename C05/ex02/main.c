#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int main(void)
{
	int a, b, c;
	a = ft_iterative_power(2, 2);
	b = ft_iterative_power(3, 3);
	c = ft_iterative_power(2, 4);
	printf("%d\n%d\n%d\n", a, b, c);
}
