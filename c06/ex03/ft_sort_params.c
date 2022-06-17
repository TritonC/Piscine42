/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:37:27 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/01 13:01:10 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_agr(int agrc, char **agrv)
{
	int	i;
	int	j;

	i = 1;
	while (i < agrc)
	{
		j = 0;
		while (agrv[i][j])
		{
			write (1, &agrv[i][j], 1);
			j++;
		}
		i++;
		write (1, "\n", 1);
	}
}

void	swap(char **agrv, int i)
{
	char	*k;

	k = agrv[i - 1];
	agrv[i - 1] = agrv[i];
	agrv[i] = k;
}

int	main(int agrc, char **agrv)
{
	int	i;
	int	j;

	i = 2;
	j = 0;
	while (agrc > i)
	{
		if (agrv[i - 1][j] > agrv [i][j])
		{
			swap(agrv, i);
			j = 0;
			i = 2;
		}
		else if (agrv[i - 1][j] == agrv[i][j])
		{
			j++;
		}
		else if (agrv [i - 1][j] < agrv[i][j])
		{
			j = 0;
			i++;
		}
	}
	print_agr(agrc, agrv);
	return (0);
}
