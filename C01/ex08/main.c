/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashin <hashin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:28:14 by hashin            #+#    #+#             */
/*   Updated: 2021/10/13 11:08:03 by hashin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int arr[6] = {2, 3, 5, 4, 1};
	
	ft_sort_int_tab(arr, 5);
	
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	return (0 );
}
