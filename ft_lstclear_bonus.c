/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:39:19 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/12/08 14:42:38 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;

	while (*lst != NULL)
	{
		next_node = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = next_node;
	}
}

/* void	ft_lstclear(t_list **lst)
{
	printf("%s\n", (*lst)->content);
} */

/* int	main(void)
{
	t_list	*node;
	t_list	*new;

	node = ft_lstnew("node");
	new = ft_lstnew("new");
	ft_lstclear(&node);
}
 */