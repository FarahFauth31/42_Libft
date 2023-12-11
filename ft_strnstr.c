/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:22:07 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/11/28 13:20:24 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	counter_find;
	size_t	count_str1;
	size_t	count_str2;

	if (*needle == '\0')
		return ((char *) haystack);
	count_str1 = 0;
	while (count_str1 < len && haystack[count_str1] != '\0')
	{
		count_str2 = count_str1;
		counter_find = 0;
		if (needle[counter_find] == haystack[count_str2])
		{
			while (needle[counter_find] == haystack[count_str2]
				&& needle[counter_find] != '\0' && count_str2 < len)
			{
				if (needle[counter_find + 1] == '\0')
					return ((char *) &haystack[count_str1]);
				counter_find++;
				count_str2++;
			}
		}
		count_str1++;
	}
	return (NULL);
}
