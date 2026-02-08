/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytumukun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:57:01 by ytumukun          #+#    #+#             */
/*   Updated: 2025/10/07 17:25:05 by ytumukun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (dstsize != 0)
	{
		while (i < dstsize - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	char dst[6];
	const char *src = "Hello42";
	size_t len;

	len = ft_strlcpy(dst, src, sizeof(dst));

	write(1, dst, 5);
	write(1, "\n", 1);

	if (len < 10)
	{
		write(1, "len: ", 5);
		char c = '0' + len;
		write(1, &c, 1);
		write(1, "\n", 1);
	}
	return (0);
}*/
