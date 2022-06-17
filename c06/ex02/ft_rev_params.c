/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:47:32 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/05/31 18:02:17 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
	return (*str);
}

int	main(int agrc, char **agrv)
{
	int	i;

	i = agrc - 1;
	while (i > 0)
	{
		ft_putstr(agrv[i]);
		write (1, "\n", 1);
		i--;
	}
	return (0);
}
