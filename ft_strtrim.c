/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:37:43 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/12/06 15:02:45 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		front;
	size_t		back;
	char		*trim_string;

	front = 0;
	while (ft_strchr(set, s1[front]) != NULL && front < ft_strlen(s1))
		front++;
	if (ft_strlen(s1) == front)
	{
		trim_string = (char *)malloc(1 * sizeof(char));
		if (!(trim_string))
			return (NULL);
		trim_string[0] = '\0';
		return (trim_string);
	}
	back = 0;
	while (ft_strchr(set, s1[ft_strlen(s1) - back - 1]) != NULL)
		back++;
	trim_string = ft_calloc(ft_strlen(s1) - front - back + 1, 1);
	if (trim_string == NULL)
		return (NULL);
	ft_memcpy(trim_string, &s1[front], ft_strlen(s1) - front - back);
	trim_string[ft_strlen(s1) - front - back] = '\0';
	return (trim_string);
}

/* int	main(void)
{
	char	s1[40] = "AADDholaDCACA";
	char	set[4] = "ADC";
	char	*str;
	int		i;

	str = ft_strtrim("", "");
	printf("Trimmed str: %s\n", str);
	i = 0;
	while (i < 5)
	{
		printf("Content: %d\n", str[i]);
		i++;
	}
} */
