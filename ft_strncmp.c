/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:19:11 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/12/04 12:15:07 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	while (s1[count] != '\0' && s2[count] != '\0' && count < n)
	{
		if (s1[count] != s2[count])
		{
			return ((unsigned char)s1[count] - (unsigned char)s2[count]);
		}
		count++;
	}
	if ((s1[count] - s2[count] != 0) && count != n)
	{
		return ((unsigned char)s1[count] - (unsigned char)s2[count]);
	}
	return (0);
}

/* int	main(void)
{
	int	diff;
	char s1[] = "Mi ";
	char s2[] = "Mi nombre es ";

	diff = ft_strncmp(s1, s2, 5);
	printf("%d\n", diff);
	diff = strncmp(s1, s2, 5);
	printf("%d\n", diff);
	char *s1 = "\200";
	char *s2 = "\0";
	int i1 = ((strncmp(s1, s2, 1) > 0) ? 1 : ((strncmp(s1, s2, 1) < 0) ?
				-1 : 0));
	int i2 = ((ft_strncmp(s1, s2, 1) > 0) ? 1 : ((ft_strncmp(s1, s2, 1) < 0) ?
				-1 : 0));

	if (i1 == i2)
		printf("yes");
} */
