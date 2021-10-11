/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashin <hashin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 09:59:06 by hashin            #+#    #+#             */
/*   Updated: 2021/10/11 10:01:45 by hashin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	revalpha;

	revalpha = 'z';
	while (revalpha >= 'a' )
	{
		write(1, &revalpha, 1);
		revalpha--;
	}
}
