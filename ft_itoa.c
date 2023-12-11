/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:23:30 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/12/04 16:36:35 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_num(int n)
{
	int	len;
	int	n_div;

	len = 0;
	if (n < 0)
	{
		len++;
		n = (-1) * n;
	}
	n_div = n;
	while (n_div > 0)
	{
		n_div /= 10;
		len++;
	}
	if (n == 0)
		len = 1;
	return (len);
}

static char	*ft_min_int(void)
{
	char	*num;

	num = (char *)malloc(12 * sizeof(char));
	if (!(num))
		return (NULL);
	num[0] = '-';
	num[1] = '2';
	num[2] = '1';
	num[3] = '4';
	num[4] = '7';
	num[5] = '4';
	num[6] = '8';
	num[7] = '3';
	num[8] = '6';
	num[9] = '4';
	num[10] = '8';
	num[11] = '\0';
	return (num);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*num;
	int		i;

	if (n == -2147483648)
		return (ft_min_int());
	len = ft_len_num(n);
	num = (char *)malloc((len + 1) * sizeof(char));
	if (!(num))
		return (NULL);
	num[len] = '\0';
	if (n < 0)
	{
		num[0] = '-';
		n = (-1) * n;
	}
	i = len - 1;
	while (n > 9)
	{
		num[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	num[i] = n + 48;
	return (num);
}

/* int	main(void)
{
	char	*num;

	num = ft_itoa(-2147483648);
	printf("Num: %s\n", num);
} */
