/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:19:52 by farah             #+#    #+#             */
/*   Updated: 2023/12/06 11:46:51 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*p_char;
	char	*p2_char;
	size_t	i;

	p_char = (char *)dst;
	p2_char = (char *)src;
	if (dst == NULL && src == NULL)
		return (dst);
	if (p_char < p2_char || p_char >= p2_char + n)
	{
		i = 0;
		while (i < n)
		{
			p_char[i] = p2_char[i];
			i++;
		}
		return (dst);
	}
	i = n;
	while (i > 0)
	{
		p_char[i - 1] = p2_char[i - 1];
		i--;
	}
	return (dst);
}

/* int	main(void)
{
	char	*dst = NULL;
	char	src[3] = "BB";

	ft_memmove(dst,src,2);
	printf("Dest: %s", dst);
}
 */