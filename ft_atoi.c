/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:38:40 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/11/27 15:42:57 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	count_sign;
	int	str_count;
	int	temp;

	count_sign = 1;
	str_count = 0;
	temp = 0;
	while (str[str_count] == 32 || str[str_count] == '\f'
		|| str[str_count] == '\n' || str[str_count] == '\r'
		|| str[str_count] == '\t' || str[str_count] == '\v')
		str_count++;
	if (str[str_count] == '+' || str[str_count] == '-')
	{
		if (str[str_count] == '-')
			count_sign = count_sign * (-1);
		str_count++;
	}
	while (str[str_count] >= '0' && str[str_count] <= '9')
	{
		temp = temp * 10 + str[str_count] - '0';
		str_count++;
	}
	return (temp * count_sign);
}
