/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:44:03 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/02 13:06:24 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char	number[11];
	int		cont;

	cont = 0;
	n--;
	number[cont] = '0' - 1;
	while (cont >= 0)
	{
		number[cont]++;
		while (cont < n)
		{
			cont++;
			number[cont] = number[cont - 1] + 1;
		}
		write(1, &number[0], n + 1);
		if (number[0] != '9' - n)
			write(1, ", ", 2);
		while (cont > -1 && number[cont] == cont + '9' - n)
			cont--;
	}
}
/*
int main(void)
{
	ft_print_combn(9);
}*/
