/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ruch03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: id <id@student.42seoul.kr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 01:43:24 by id                #+#    #+#             */
/*   Updated: 2021/10/09 01:48:45 by id               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define FIRST_LEFT_WORD 'A'
#define LAST_RIGHT_WORD 'C'

void	rush(int x, int y)
{
	int x_length; // 가로길이
	int y_length; // 세로길이

	if ((x_length < 1) || (y_length < 1))
		return;
	while (y_length <= y)
	{
		while (x_length <= x)
		{
			if((x_length == 1 && y_length == 1) || (x_length == 1 && y_length == y))
				ft_putchar(FIRST_LEFT_WORD);
			else if ((x_length == x && y_length == 1) || (x_length == x && y_length == y))
				ft_putchar(LAST_RIGHT_WORD);
			else if ((x_length > 1 && x_length < x) && (y_length > 1 && y_length < y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			x_length++;
		}
		y_length++;
		ft_putchar('\n');
	}
