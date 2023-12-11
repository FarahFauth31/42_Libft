/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:39:00 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/11/28 15:50:34 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p_int;
	size_t	i;

	p_int = (char *)b;
	i = 0;
	while (i < len)
	{
		p_int[i] = c;
		i++;
	}
	return (b);
}
