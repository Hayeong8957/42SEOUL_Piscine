/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: id <id@student.42seoul.kr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:35:55 by id                #+#    #+#             */
/*   Updated: 2021/10/14 16:41:15 by id               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char src[6] = {1, 2, 3, 4, 5};
	char dest[6];
	int n = 2;

	ft_strncpy(dest, src, n);
	
	for(int i = 0; i < n; i++)
		printf("%d", dest[i]);
	return (0 );
}
