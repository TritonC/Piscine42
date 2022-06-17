/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:30:53 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/05/31 17:37:51 by mluis-fu         ###   ########.fr       */
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

	i = agrc;
	ft_putstr(agrv[0]);
	write (1, "\n", 1);
	return (0);
}
