/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: id <id@student.42seoul.kr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 20:32:36 by id                #+#    #+#             */
/*   Updated: 2021/10/25 02:38:24 by id               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_space(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 9 && *str <= 13 || *str == 32)
			return (1);
	}
	return (0);
}

int	check_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || ft_strlen(base) <= 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] >= 9 && base[i] <= 13 || base[i] == 32)
			return (0);
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		i = i + 1;
		while (base[j])
			if (base[i] == base[j++])
				return (0);
		i++;
	}
	return (1);
}

int	check_base_number(char *base, char match)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == match)
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	minus_check;
	int	base_index;

	base_index = check_base_number(base, *str);
	result = 0;
	minus_check = 1;
	if (check_valid_base(base) == 0)
		return (0);
	while (is_space(str) == 1)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus_check *= -1;
		str++;
	}
	while (base_index != 0)
	{
		result *= ft_strlen(base);
		result += base_index;
		str++;
	}
	return (result * minus_check);
}

int	main(void)
{
	ft_atoi_base("abcg", "0123456789abcdef");
}
