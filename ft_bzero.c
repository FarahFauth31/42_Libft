/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:56:28 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/11/28 16:04:30 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p_int;
	size_t	i;

	p_int = (char *)s;
	i = 0;
	while (i < n)
	{
		p_int[i] = 0;
		i++;
	}
}
