/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: id <id@student.42seoul.kr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 20:50:55 by id                #+#    #+#             */
/*   Updated: 2021/10/12 21:53:12 by id               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int arr[6] = {1, 2, 3, 4, 5};
	
	ft_rev_int_tab(arr, 5);
	
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	return (0 );
}
