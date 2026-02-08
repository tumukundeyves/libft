/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytumukun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 17:03:34 by ytumukun          #+#    #+#             */
/*   Updated: 2025/10/15 16:23:52 by ytumukun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
	char  c = 'r';
	char  d = ' ';
	int  n1 = 21 ;
	
	if(ft_isprint(c))
	{
		write(1, "'r' is printable\n", 17);
	}
	else
	{
		write(1, "'r' is not printable\n", 21);
	}
	if(ft_isprint(d))
	{
		write(1, "'$' is print\n", 13);
	}
	else
	{
		write(1, "'$' is not printable\n", 21);
	}
	if(ft_isprint(n1))
	{
		write(1, "21 is print\n", 12);
	}
	else
	{
		write(1, "21 is not printable\n", 20);
	}
	return (0);
}*/
