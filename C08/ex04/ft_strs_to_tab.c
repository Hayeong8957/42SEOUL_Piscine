/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashin <hashin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:22:43 by hashin            #+#    #+#             */
/*   Updated: 2021/10/27 18:13:08 by hashin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strcpy(char	*dest, char *src)
{
	int	i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char *s;

	s = (char *)malloc(sizeof(strlen(src) + 1));
	if (s != '\0')
		ft_strcpy(s, src);
	return	s;
}

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *s;
	int	i;

	i = 0;
	s = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (s == NULL)
		return (NULL);
	while (i < ac)
	{
		s[i].size = ft_strlen(av[i]);
		s[i].str = av[i];
		s[i].copy = ft_strdup(av[i]);
		i += 1;
	}
	s[i].str = 0;
	return (s);
}
