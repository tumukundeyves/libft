/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytumukun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 19:14:17 by ytumukun          #+#    #+#             */
/*   Updated: 2025/10/10 17:54:32 by ytumukun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char buffer[10] = "ABCDEFGHI";
	size_t i;

	ft_bzero(buffer, 10);
	
	i = 0;
	while (i < 10)
	{
		if(buffer[i] == 0)
			write(1, ".", 1);
		else
			write(1, &buffer[i], 1);
		i++;
	}
	write(1, "\n", 1);
	
	return (0);
}*/
