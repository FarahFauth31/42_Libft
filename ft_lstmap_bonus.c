/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:11:09 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/12/08 17:06:54 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	del(void *content)
{
	content = NULL;
}

void	*f(void *content)
{
	return ("hola");
} */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*data;

	new_list = NULL;
	while (lst != NULL)
	{
		data = (*f)(lst->content);
		new_node = ft_lstnew(data);
		if (new_node == NULL)
		{
			free(data);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
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
	node1->next = node2;
    node2->next = node3;
	new = ft_lstmap(node1, f, del);
	while (new != NULL)
	{
		printf("%s\n", new[0].content);
		new = new->next;
	}
} */
