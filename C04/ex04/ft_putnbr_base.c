/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashin <hashin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 09:51:19 by hashin            #+#    #+#             */
/*   Updated: 2021/10/24 22:10:22 by id               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base == 0 || ft_strlen(base) <= 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] >= 9 && base[i] <= 13)
			return (0);
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j])
			if (base[i] == base[j++])
				return(0);
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
	char *c, *d, *e;
	c = "0123456789abcdef";
	d = "12";
	e = "";
	
	ft_putnbr_base(i, d);
	ft_putnbr_base(i2, e);	
}
