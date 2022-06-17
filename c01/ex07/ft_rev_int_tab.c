/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:01:57 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/05/24 16:37:53 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	swap;
	int	count_init;

	count_init = 0;
	count = size - 1;
	while (count_init <= count)
	{
		swap = tab[count_init];
		tab[count_init] = tab[count];
		tab[count] = swap;
		count_init++;
		count--;
	}
}
