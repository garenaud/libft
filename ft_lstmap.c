/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 10:35:49 by grenaud-          #+#    #+#             */
/*   Updated: 2021/11/18 14:54:41 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new;
	t_list	*prev;
	t_list	*curr;

	curr = lst;
	temp = NULL;
	while (curr != NULL)
	{
		if (f != NULL || curr->content != NULL)
			if ((curr->content = f(curr->content)) == NULL)
				return (NULL);
		if ((new = ft_lstnew(curr->content)) == NULL)
			return (NULL);
		ft_lstadd_back(&temp, new);
		if (del != NULL)
			(*del)(curr->content);
		prev = curr;
		curr = curr->next;
		free(prev);
	}
	return (temp);
}

/* t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;
	t_list	*tail;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (NULL);
	ft_lstadd_back(&head, new);
	tail = head;
	lst = lst->next;
	while (lst)
	{
		if (!new)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&tail, new);
		tail = tail->next;
		lst = lst->next;
	}
	return (head);
} */
