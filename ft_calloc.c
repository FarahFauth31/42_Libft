/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:06:47 by farah             #+#    #+#             */
/*   Updated: 2023/12/04 12:28:07 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*array;
	size_t	i;
	size_t	totalsize;

	totalsize = nmemb * size;
	if (nmemb != 0 && (totalsize / nmemb != size))
		return (NULL);
	array = (char *) malloc (nmemb * size);
	if (!(array))
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
		array[i++] = 0;
	return (array);
}

/* int	main(void)
{
	char	*s;
	int	i;

	i = 0;
	while (i < 100)
	{
		printf("Buffer contents: %d\n", s[i]);
		i++;
	}
	s = calloc(0, 5);
	printf("str: %s\n", s);
	i = 0;
	while (i < 100)
	{
		printf("Buffer contents: %d\n", s[i]);
		i++;
	}
} */
