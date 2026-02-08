/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytumukun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 16:03:29 by ytumukun          #+#    #+#             */
/*   Updated: 2025/10/04 18:57:55 by ytumukun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*int	main(void)
{
	char c0 = 'N';
	char c1 = 'd';
	char c2 = '6';
	char c3 = '$';

	if(ft_isalpha(c0))
		write(1, "N is alpha\n", 11);
	
	else
		write(1, "B is not alpha\n", 15);

	if(ft_isalpha(c1))
		write(1, "d is alpha\n", 11);

	else
		write(1, "d is not alpha\n", 15);

	if(ft_isalpha(c2))
		write(1, "6 is alpha\n", 11);

	else
		write(1, "6 is not alpha\n", 15);

	if(ft_isalpha(c3))
		write(1, "$ is alpha\n", 11);

	else
		write(1, "$ is not alpha\n", 15);

	
	return (0);
}*/
