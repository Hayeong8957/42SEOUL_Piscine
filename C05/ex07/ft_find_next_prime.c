/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashin <hashin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 13:25:08 by hashin            #+#    #+#             */
/*   Updated: 2021/10/23 14:18:02 by hashin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 3)
		return (2);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

int	main(void)
{
	int a = 0;
	int b = 1;
	int c = 8;
	int d = 2147483646;

	printf("0: %d\n1: %d\n8: %d\n2147483646: %d\n", ft_find_next_prime(a), ft_find_next_prime(b), ft_find_next_prime(c), ft_find_next_prime(d));
}
