/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 00:22:28 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/05/30 21:24:21 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count;
	int	found;

	found = 0;
	count = 0;
	while (count <= nb)
	{
		if (count == 46341)
			return (0);
		if (count * count == nb)
			return (count);
		else if (count > nb)
			return (0);
		count ++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_sqrt(2147483647));
}*/
