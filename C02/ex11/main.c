#include <unistd.h>

void	ft_putstr_non_printable(char	*str);

int	main(void)
{
	char	*string;

	string = "Coucou\n vas bien ?";
	ft_putstr_non_printable(string);
}
