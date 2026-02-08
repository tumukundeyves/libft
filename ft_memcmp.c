/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytumukun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 19:03:09 by ytumukun          #+#    #+#             */
/*   Updated: 2025/10/09 15:36:56 by ytumukun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char) str1[i] != (unsigned char) str2[i])
			return ((unsigned char) str1[i] - (unsigned char) str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char p1[] = "Hello";
	char p2[] = "Hellx";

	int result = ft_memcmp(p1, p2, 5);
	
	if (result == 0)
		write(1, "Equal\n", 6);
	else if (result < 0)
		write(1, "s1 < s2\n", 8);
	else
		write(1, "s1 > s2\n", 8);
	return (0);
}*/
