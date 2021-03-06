/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: id <id@student.42seoul.kr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 20:24:50 by id                #+#    #+#             */
/*   Updated: 2021/10/22 20:35:45 by id               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
		return (0);
	if (nb < 0)
		nb = -nb;
	while (i <= 46340 && (i * i) < nb)
		i++;
	if ((i * i) == nb)
		return (i);
	else
		return (0);
}
