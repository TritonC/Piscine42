/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:53:27 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/05/31 12:59:10 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	check_base(char *base)
{
	int	b;
	int	i;

	b = 0;
	while (base[b])
	{
		if (base[b] == '+' || base [b] == '-')
			return (0);
		i = b + 1;
		while (base[i])
		{
			if (base[b] == base [i])
				return (0);
			i++;
		}
		b++;
	}
	if (b <= 1)
		return (0);
	return (b);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	num;
	int			size;
	int			count;

	count = 0;
	num = nbr;
	size = check_base(base);
	if (size > 1)
	{
		if (num >= size)
		{
			ft_putnbr_base(num / size, base);
			ft_putchar(base[num % size]);
		}
		else
			ft_putchar(base[num % size]);
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	sign;

	i = 0;
	j = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str [i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		j = (str[i] - 48) + (j * 10);
		i++;
	}
	return (j * sign);
}

int	ft_atoi_base(char *str, char *base)
{
	return (ft_putnumber_base(ft_atoi(*str), *base));
}
