/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashin <hashin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 09:51:19 by hashin            #+#    #+#             */
/*   Updated: 2021/10/25 00:49:53 by id               ###   ########.fr       */
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
	if (base[0] == '\0' || ft_strlen(base) <= 1)
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
	long	c_nbr;
	int	base_size;

	c_nbr = nbr;
	base_size = 0;
	if (check_base(base) == 1)
	{
		while (base[base_size] != '\0')
			base_size++;
		if (c_nbr < 0)
		{
			ft_putchar('-');
			c_nbr = c_nbr * -1;
		}
		if (c_nbr >= base_size)
		{
			ft_putnbr_base(c_nbr / base_size, base);
			ft_putnbr_base(c_nbr % base_size, base);
		}
		else if(c_nbr < base_size)
			ft_putchar(base[c_nbr]);
	}
}

int main(void)
{
	
	ft_putnbr_base(-2147483648, "0123456789");
		
}
