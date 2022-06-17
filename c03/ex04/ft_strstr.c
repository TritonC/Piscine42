/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:46:01 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/05/28 20:53:55 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	count_src;
	int	limit;

	count_src = 0;
	count = 0;
	limit = 0;
	while (to_find[limit])
		limit++;
	if (limit == '\0')
		return (str);
	while (str[count])
	{
		if (str[count] == to_find[count_src])
			count_src++;
		else if (str[count] != to_find[count_src])
			count_src = 0;
		if (count_src == limit)
			return (&str[count - (limit - 1)]);
		count++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
 
int main()
{
	char cadena[20] = "manuel  fu";
	char cadena2[20] = "ana";
	printf("%s\n", ft_strstr(cadena, cadena2));
	printf("%s", strstr(cadena, cadena2));
}*/
