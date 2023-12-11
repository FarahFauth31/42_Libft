/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:04:54 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/12/06 12:12:54 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		count_str;
	char	*p_last;

	count_str = 0;
	p_last = NULL;
	while (s[count_str] != '\0')
	{
		if (s[count_str] == (unsigned char)c)
			p_last = (char *) &s[count_str];
		count_str++;
	}
	if ((unsigned char)c == 0)
		return ((char *) &s[count_str]);
	return (p_last);
}
