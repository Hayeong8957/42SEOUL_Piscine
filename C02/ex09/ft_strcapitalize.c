/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: id <id@student.42seoul.kr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 23:17:52 by id                #+#    #+#             */
/*   Updated: 2021/10/17 23:24:07 by id               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strtype(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		return (1 );
	if (str[i] >= 'A' && str[i] <= 'Z')
		return (1 );
	if (str[i] >= '0' && str[i] <= '9')
		return (1 );
	else
		return (0 );
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (strtype(str, i - 1) == 0)
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
