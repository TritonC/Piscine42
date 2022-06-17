/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 00:34:25 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/02 17:22:10 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;

	count = 2;
	if (nb < 2)
		return (0);
	while (count < nb)
	{
		if (count == 46341)
			return (1);
		if (nb % count == 0)
			return (0);
		count++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_is_prime(2147483646));
}*/
