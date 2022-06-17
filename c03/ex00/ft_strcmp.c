/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:14:00 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/05/29 02:58:36 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] || s2[count])
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char a[] = "abcdefgh";
	char b[] = "";
	int	c = strcmp(a, b);
	int d = ft_strcmp(a, b);

	printf("funcion original: %d. \n", c);
	printf("Mi funcion: %d. \n", d);
}*/
