/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:47:44 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/12/01 16:10:53 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strconcat(char const *s1, char const *s2, char *strjoin)
{
	int	count;
	int	src_count;

	count = 0;
	src_count = 0;
	while (s1[src_count] != '\0')
	{
		strjoin[count] = s1[src_count];
		src_count++;
		count++;
	}
	src_count = 0;
	while (s2[src_count] != '\0')
	{
		strjoin[count] = s2[src_count];
		src_count++;
		count++;
	}
	strjoin[count] = '\0';
	return (strjoin);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*strjoin;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	strjoin = (char *) malloc ((len1 + len2 + 1) * sizeof(char));
	if (!(strjoin))
		return (NULL);
	strjoin = ft_strconcat(s1, s2, strjoin);
	return (strjoin);
}

/* int	main(void)
{
	char	*ptr;
	char s1[] = "Mi nombre es ";
	char s2[] = "Farah Fauth Puigdomenech.";

	ptr = ft_strjoin(s1, s2);
	printf("%s\n", ptr);
	free(ptr);
} */
