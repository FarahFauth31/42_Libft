/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:16:55 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/12/06 15:48:11 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_malloc(char **array, int row)
{
	int	i;

	i = 0;
	while (i < row)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (s[0] != c && s[0] != '\0')
		count = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i + 1] == c)
				i++;
			if (s[i + 1] != '\0')
				count++;
		}
		i++;
	}
	return (count);
}

static int	ft_len_words(int i, char const *s, char c)
{
	int	len_word;

	len_word = 0;
	while (s[i] != c && s[i] != '\0')
	{
		len_word++;
		i++;
	}
	return (len_word);
}

static char	**ft_fill_array(char const *s, char c, char **array)
{
	int	row;
	int	i;
	int	len_word;

	i = 0;
	row = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != '\0')
	{
		len_word = ft_len_words(i, s, c);
		array[row] = ft_substr(s, i, len_word);
		if (array[row] == NULL)
		{
			ft_free_malloc(array, row);
			return (NULL);
		}
		i = len_word + i;
		while (s[i] == c && s[i] != '\0')
			i++;
		row++;
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	int		nwords;
	char	**array;

	nwords = ft_count_words(s, c);
	array = (char **)malloc((nwords + 1) * sizeof(char *));
	if (!(array))
		return (NULL);
	array[nwords] = 0;
	array = ft_fill_array(s, c, array);
	return (array);
}

/* int	main(void)
{
	int	i;

	char c = 0;
	char str[] = "hello!zzzzzzzz";
	char	**result;
	char	*inv;

	*inv = 0;
	result = ft_split(inv, 0);
	i = 0;
	while (i < 5)
	{
		printf("%s, %d\n", result[i], i);
		i++;
	}
	//printf("%s\n", result);
	//while (42);
} */
