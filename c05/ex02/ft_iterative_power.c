/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:50:13 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/01 18:51:54 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	count;
	int	res;

	res = 1;
	count = power;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else
	{
		while (count > 0)
		{
			res = res * nb;
			--count;
		}
		return (res);
	}
}

#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_power(5, 30));
}
