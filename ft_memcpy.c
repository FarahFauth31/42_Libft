/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:05:37 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/12/06 11:46:45 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*p_char;
	char	*p2_char;
	size_t	i;

	p_char = (char *)dst;
	p2_char = (char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	while (i < n)
	{
		p_char[i] = p2_char[i];
		i++;
	}
	return (dst);
}

/* int	main(void)
{
	char	*dst = NULL;
	char	src[3] = "BB";

	memcpy(dst,src,2);
	printf("Dest: %s", dst);

} */
