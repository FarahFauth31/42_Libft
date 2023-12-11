/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:33:11 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/12/07 13:00:49 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst != NULL && new != NULL)
	{
		last = ft_lstlast(*lst);
		if (last == NULL)
			(*lst) = new;
		else
			last->next = new;
	}
}

/* int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*new;

	node1 = ft_lstnew("node1");
	node2 = ft_lstnew("node2");
	node3 = ft_lstnew("node3");
	new = ft_lstnew("new");
	node1->next = node2;
    node2->next = node3;
	ft_lstadd_back(&node1, new);
	printf("%s\n", node3[0].next[0].content);
} */
