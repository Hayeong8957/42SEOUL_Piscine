/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashin <hashin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 10:45:28 by hashin            #+#    #+#             */
/*   Updated: 2021/10/20 13:58:57 by hashin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_whitespace(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	return (i);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	check;
	int	i;
	int	num;

	check = 1;
	i = ft_whitespace(str);
	num = 0;
	while (str[i++] == '-' || str[i++] == '+')
	{
		if (str[i] == '-')
			check = -1;
		else
			check = 1;
	}
	while (ft_isdigit(str[i]) == 1)
		num = (num * 10) + (str[i++] - '0');
	return (check * num);
}
