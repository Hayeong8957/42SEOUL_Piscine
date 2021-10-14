/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: id <id@student.42seoul.kr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 20:53:41 by id                #+#    #+#             */
/*   Updated: 2021/10/14 21:15:35 by id               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char *str1;
	char str2[27];
	int index;

	str1 = "abcdefghijklmnopqrstuvwxyz";
	index = 0;
	while (index < 27)
	{
		str2[index] = str1[index];
		index++;
	}

	ft_strupcase(&str2[0]);

	printf("%s\n", str2);
}
	
