/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:21:19 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/12/06 13:23:48 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	s_len = ft_strlen(s);
	if ((size_t)start >= s_len)
	{
		substr = ft_calloc(1, sizeof(char));
		if (!(substr))
			return (NULL);
		return (substr);
	}
	if (s_len - (size_t) start >= len || len < 0)
		substr = ft_calloc(len + 1, sizeof(char));
	else
		substr = ft_calloc(s_len - (size_t) start + 1, sizeof(char));
	if (!(substr))
		return (NULL);
	if (s_len - (size_t) start >= len || len < 0)
		ft_strlcpy(substr, &s[start], len + 1);
	else
		ft_strlcpy(substr, &s[start], len);
	return (substr);
}

/* int	main(void)
{
	char *str = "01234";
 	size_t size = 10;
 	char *ret = ft_substr(str, 10, size);

 	printf("%s\n", ft_substr("hola", 0, 18446744073709551615));
} */
