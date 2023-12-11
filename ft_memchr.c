/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:47:53 by farah             #+#    #+#             */
/*   Updated: 2023/12/06 12:17:42 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			count_s;
	unsigned char	*p_s;

	count_s = 0;
	p_s = (unsigned char *)s;
	while (count_s < n)
	{
		if (p_s[count_s] == (unsigned char)c)
			return (&p_s[count_s]);
		count_s++;
	}
	return (NULL);
}
