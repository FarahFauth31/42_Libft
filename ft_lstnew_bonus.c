/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:44:08 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/12/06 17:07:03 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!(node))
		return (NULL);
	node[0].content = content;
	node[0].next = NULL;
	return (node);
}

/* int	main(void)
{
	char	*src = "holaaaa";
	t_list	*node;

	node = ft_lstnew(src);
	printf("%s\n", node[0].content);
	//printf("%s\n", node[0].next);
} */
