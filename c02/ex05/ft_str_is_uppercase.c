/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:14:38 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/05/26 12:11:15 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	count;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	printf("%d",ft_str_is_uppercase(""));
}*/
