/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytumukun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:34:26 by ytumukun          #+#    #+#             */
/*   Updated: 2025/10/10 17:48:54 by ytumukun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
	char c = 'G';
	char d = '#';
	int not_ascii = 183;

	if(ft_isascii(c))
	{
		write(1, "'G' is ascii\n", 13);
	}
	else
	{
		write(1, "'G' is not ascii\n",17);
	}
	if(ft_isascii(d))
	{
		write(1, "'#' is ascii\n",13);
	}
	else
	{
		write(1, "'#' is not ascii\n",17);
	}
	if(ft_isascii(not_ascii))
	{
		write(1, "183 is ascii\n", 13);
	}
	else
	{
		write(1, "183 is not ascii\n", 17);
	}
	return (0);
}*/
