/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:13:13 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/12/06 12:12:50 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				count_str;

	count_str = 0;
	while (s[count_str] != '\0')
	{
		if (s[count_str] == (unsigned char)c)
			return ((char *) &s[count_str]);
		count_str++;
	}
	if ((unsigned char)c == 0)
		return ((char *) &s[count_str]);
	return (NULL);
}

/* int	main(void)
{
	char	dst[22] = "teste";
	char	src[5] = "BBBB";
	char	*str;
	char	*str2;
	int	i;

	str = ft_strchr(dst, 't' + 256);
	printf("Dirección de memoria de cadena: %p\n", (void *)str);
	str2 = strchr(dst, 't' + 256);
	printf("Dirección de memoria de cadena: %p\n", (void *)str2);
	printf("p to chr: %s\n", str);
	printf("p to chr: %s\n", str2);
} */
