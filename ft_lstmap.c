/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 17:40:23 by mpepin            #+#    #+#             */
/*   Updated: 2021/12/20 16:48:45 by mpepin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*create_first_node(t_list *lst,
	void *(*f)(void *), void (*del)(void *))
{
	t_list	*first_node;
	void	*first_content;

	if (!f)
		return (NULL);
		first_node = lst;
	if (first_node != NULL)
	{
		first_content = f(first_node->content);
		first_node = ft_lstnew(first_content);
		if (!first_node)
		{
			del(first_content);
			return (NULL);
		}
		return (first_node);
	}
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*first_node;
	t_list	*new_node;
	void	*new_content;	

	temp = lst;
	first_node = create_first_node(temp, f, del);
	if (!first_node)
		return (NULL);
	temp = temp->next;
	while (temp != NULL)
	{
		new_node = temp;
		new_content = f(new_node->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del (new_content);
			ft_lstclear(&first_node, del);
			return (NULL);
		}
		ft_lstadd_back(&first_node, new_node);
		temp = temp->next;
	}
	return (first_node);
}

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*temp;
// 	t_list	*first_node;
// 	t_list	*new_node;

// 	if (!lst)
// 		return (NULL);
// 	temp = lst;
// }
