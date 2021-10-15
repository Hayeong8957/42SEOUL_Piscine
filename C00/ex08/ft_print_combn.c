/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: id <id@student.42seoul.kr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 23:52:26 by id                #+#    #+#             */
/*   Updated: 2021/10/16 00:41:08 by id               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	a)
{
	write(1, &a, 1);
}

void	ft_putvet(int vet[], int n) // 백터의 캐릭터를 위한 것
{
	int	c; // 루프를 세기 위한 것

	c = 0; // 루프 세는 횟수 0으로 초기화 
	while (c < n) // 각 숫자에 대해 하나씩 반복
	{
		ft_putchar(vet[c] + '0'); // 위치와 벡터에 저장된 값을 인쇄
		c++; // 세는 횟수 ++
	}
}

int	ft_get_index(int combn[], int n)
{
	int	c;
	int	max;

	c = 0;
	max = 10 - n;
	while (c < n)
	{
		if (combn[c] == max)
			return (c - 1);
		if (c == (n - 1) && combn[c] < max)
			return (c);
		c++;
		max++;
	}
	return (-1);
}

void	ft_increment(int vet[], int n, int index) 
{
	int	c; 

	c = index + 1;
	vet[index]++;
	while (c <= n) 
	{
		vet[c] = vet[c - 1] + 1;
		c++;
	}
}

void	ft_print_combn(int n)
{
	int	combn[n]; //출력할 조합의 해당 자릿수를 저장하는 데 사용되는 벡터
	int	c;
	int	pos_index;

	if (n >= 10 || n <= 0) // 예외처리
		return;
	else // 조합의 인쇄물에 대한 코드
	{
		c = 0;
		while (c < n) // 첫번째 일치할 때 값 
		{
			combn[c] = c;// 각 자릿수의 초기 값
			c++;
		}
		while (ft_get_index(combn, n) != -1) // 마지막을 제외한 모든 일치 벡터에 대해 루프한 다음 "."
		{
			pos_index = ft_get_index(combn, n); // 인덱스 위치 변수
			ft_putvet(combn, n); // 벡터 인쇄
			ft_increment(combn, n, pos_index); // 증가
			write(1, ", ", 2); // 구분기호 인쇄
		}
		ft_putvet(combn, n); // 마지막 일치에 대한 인쇄 벡터 (789)
	}
}
