/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farah <farah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:58:46 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/12/05 13:59:26 by farah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	ft_f(unsigned int i, char c)
{
	return (c + 1);
} */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char			*new_str;

	len = ft_strlen(s);
	new_str = (char *)malloc((len + 1) * sizeof(char));
	if (!(new_str))
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/* int	main(void)
{
	printf("%s\n", ft_strmapi("hola", &ft_f));
} */
