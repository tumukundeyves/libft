/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytumukun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:32:06 by ytumukun          #+#    #+#             */
/*   Updated: 2025/10/10 17:39:00 by ytumukun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
void ft_putnbr(int n)
{
	char c;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int main(void)
{
	ft_putnbr(ft_atoi("   -12345abc"));
	write(1, "\n", 1);
	ft_putnbr(ft_atoi("+987"));
	write(1, "\n", 1);
	ft_putnbr(ft_atoi("42"));
	write(1, "\n", 1);
	ft_putnbr(ft_atoi("--123")); // only first '-' counts
	write(1, "\n", 1);
	return 0;
}*/
