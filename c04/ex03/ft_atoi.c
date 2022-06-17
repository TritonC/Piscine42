/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:13:33 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/05/30 15:56:54 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	sign;

	i = 0;
	j = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str [i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		j = (str[i] - 48) + (j * 10);
		i++;
	}
	return (j * sign);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_atoi("   ---+--+-1234ab567"));
}*/
