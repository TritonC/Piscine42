/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:20:46 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/05/22 12:24:52 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_pr(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_pr(a / 10 + '0');
			ft_pr(a % 10 + '0');
			write(1, " ", 1);
			ft_pr(b / 10 + '0');
			ft_pr(b % 10 + '0');
			b++;
			if (a != 98)
				write(1, ", ", 2);
		}
		a++;
	}
}
/*int main(void)
{
	ft_print_comb();
}
*/
