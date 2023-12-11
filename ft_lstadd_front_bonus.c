/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:01:18 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/12/07 12:41:36 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = (*lst);
		(*lst) = new;
	}
}

/* t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!(node))
		return (NULL);
	node[0].content = content;
	node[0].next = NULL;
	return (node);
} */

/* int	main(void)
{
	t_list	*node;
	t_list	*new;

	node = ft_lstnew("node");
	new = ft_lstnew("new");
	printf("%s\n", new[0].content);
	printf("%p\n", node[0].content);
	printf("%p\n", new[0].next);
	ft_lstadd_front(&node, new);
	printf("%s\n", new[0].content);
	printf("%p\n", new[0].next[0].content);
} */
