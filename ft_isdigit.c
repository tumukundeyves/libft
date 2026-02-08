/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytumukun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 16:36:57 by ytumukun          #+#    #+#             */
/*   Updated: 2025/10/04 19:00:41 by ytumukun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*int	main(void)
{
	char c = '7';
	//char d = 'q';

	if(ft_isdigit(c))
		write(1, "Q is digit\n", 11);
	else
		write(1, "Q is not digit\n",15);
	//ft_isdigit(d);

	return (0);
}*/
