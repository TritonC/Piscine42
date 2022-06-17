/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:15:37 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/05/26 18:15:47 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	count;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			count = 1;
		else
			return (0);
		i++;
	}
	return (count);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d",ft_str_is_lowercase("aasda1231313.13z[xp"));
}*/
