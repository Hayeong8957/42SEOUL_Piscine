/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: id <id@student.42seoul.kr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:08:01 by id                #+#    #+#             */
/*   Updated: 2021/10/23 13:21:58 by hashin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int	nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	int a = 0;
	int b = 1;
	int c = 2147483647;
	
	printf("0: %d\n", ft_is_prime(a));
	printf("1: %d\n", ft_is_prime(b));
	printf("2147483647: %d\n", ft_is_prime(c));
	
}
