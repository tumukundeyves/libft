/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytumukun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 15:34:07 by ytumukun          #+#    #+#             */
/*   Updated: 2025/10/15 16:23:00 by ytumukun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int	main(void)
{
	char test[] = {'a','B','d','2','@'};
	int i = 0;

	while(i < 5)
	{
		if(ft_isalnum(test[i]))
		{
			write(1, &test[i], 1);
			write(1, " is alphanumeric\n",17);
		}
		else
		{
			write(1, &test[i], 1);
			write(1, " is not alphanumeric\n",21);
		}
	i++;
	}
	return (0);
}*/
