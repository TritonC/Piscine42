/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 00:40:27 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/05/31 12:53:56 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	count;

	count = 2;
	if (nb <= 1)
		return (0);
	while (count <= nb / count)
	{
		if (nb % count == 0)
			return (0);
		count++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	count;

	if (nb <= 2)
		nb = 2;
	count = nb;
	while (!ft_is_prime(count))
		count++;
	return (count);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_find_next_prime(8));
}*/
