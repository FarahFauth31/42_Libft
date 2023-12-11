/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:53:34 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/12/06 11:44:35 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	len2;
	size_t	count;

	count = 0;
	len = ft_strlen(dst);
	len2 = ft_strlen(src);
	if (dstsize > len)
	{
		while (src[count] != '\0' && count < (dstsize - len - 1))
		{
			dst[count + len] = src[count];
			count++;
		}
		dst[count + len] = '\0';
		return (len + len2);
	}
	else
		return (dstsize + len2);
}
