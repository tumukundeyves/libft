/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytumukun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:28:42 by ytumukun          #+#    #+#             */
/*   Updated: 2025/10/08 17:06:06 by ytumukun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return ((char *)last);
}
/*
int	main(void)
{
	const char *str = "Hello42r";
	char *ptr;

	ptr = ft_strrchr(str, 'r');
	if(ptr)
		write(1, ptr, 3);
	write(1, "\n",1);
	return (0);
}*/
