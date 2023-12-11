/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farah <farah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:01:24 by farah             #+#    #+#             */
/*   Updated: 2023/12/05 14:10:30 by farah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_rec(int n, int fd)
{
	int	rest;

	if (n > 9)
	{
		ft_rec(n / 10, fd);
	}
	rest = (n % 10) + 48;
	write(fd, &rest, 1);
	return ;
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	ft_rec(n, fd);
}

/* int	main(void)
{
	int	num;

	num = -214748;
	ft_putnbr_fd(num, 1);
} */
