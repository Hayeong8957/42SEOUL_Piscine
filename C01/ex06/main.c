/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: id <id@student.42seoul.kr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:40:40 by id                #+#    #+#             */
/*   Updated: 2021/10/12 19:46:37 by id               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char	*str);

int	main(void)
{
	char string[] = "Hello, World!";

	int count = ft_strlen(string);

	printf("%d\n", count);
	return (0 );
}
