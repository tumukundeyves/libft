/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytumukun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:37:02 by ytumukun          #+#    #+#             */
/*   Updated: 2025/10/10 17:47:56 by ytumukun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	char buffer[10];
	size_t i;

	ft_memset(buffer, 'a', 10);
	
	i = 0;
	while (i < 10)
	{
		write(1, &buffer[i], 1);
		i++;
	}
	write(1, "\n", 1);

	return (0);
}*/
