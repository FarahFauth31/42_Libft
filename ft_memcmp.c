/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:51:33 by farah             #+#    #+#             */
/*   Updated: 2023/12/04 12:17:41 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	count;
	char	*p_s1;
	char	*p_s2;

	count = 0;
	p_s1 = (char *) s1;
	p_s2 = (char *) s2;
	while (count < n)
	{
		if (p_s1[count] != p_s2[count])
			return ((unsigned char)p_s1[count] - (unsigned char)p_s2[count]);
		count++;
	}
	return (0);
}
