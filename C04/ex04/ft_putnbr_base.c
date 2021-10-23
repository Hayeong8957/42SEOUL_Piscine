/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashin <hashin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 09:51:19 by hashin            #+#    #+#             */
/*   Updated: 2021/10/23 11:02:52 by hashin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] >= 9 && base[i] <= 13)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return(0);
			j++;
		}
		i++;
	}
	return (1);
}	

void	ft_putnbr_base (int nbr, char *base)
{
	int	base_size;

	base_size = 0;
	if (check_base(base) == 1)
	{
		while (base[base_size] != '\0')
			base_size++;
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		if (nbr >= base_size)
		{
			ft_putnbr_base(nbr / base_size, base);
			ft_putnbr_base(nbr % base_size, base);
		}
		else if(nbr < base_size)
			ft_putchar(base[nbr]);
	}
}

int main(void)
{
	int i = 1;
	int i2 = 2;
	int i3 = 11;
	int i4 = 15;
	char *c;
	c = "0123456789abcdef";
	ft_putnbr_base(i , c);
	ft_putnbr_base(i2, c);
	ft_putnbr_base(i3, c);
	ft_putnbr_base(i4, c);	
}
