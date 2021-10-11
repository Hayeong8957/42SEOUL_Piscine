/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashin <hashin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:28:05 by hashin            #+#    #+#             */
/*   Updated: 2021/10/11 12:10:34 by hashin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_int(int i)
{
	char	num;

	num = i + 48;
	write(1, &num, 1);
}

void	ft_print_comb2(void)
{
	int	A;
	int	B;

	A = 0;
	while (A <= 98)
	{
		B = A + 1;
		while (B <= 99)
		{
			print_int(A / 10);
			print_int(A % 10);
			write(1, " ", 1);
			print_int(B / 10);
			print_int(B % 10);
			if (A == 98 && B == 99)
			{
				break ;
			}
			write(1, ", ", 2);
			B++;
		}
		A++;
	}
}
