/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashin <hashin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 09:48:15 by hashin            #+#    #+#             */
/*   Updated: 2021/10/13 11:09:00 by hashin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int	*tab, int size)
{
	int	index;
	int	nextidx;
	int	temp;

	index = 0;
	nextidx = 0;
	while (index < size)
	{
		while (nextidx < size)
		{
			if (tab[index] > tab[nextidx])
			{
				temp = tab[index];
				tab[index] = tab[nextidx];
				tab[nextidx] = temp;
			}
			nextidx++;
		}
		index++;
		nextidx = index + 1;
	}
}
