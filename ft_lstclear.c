/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:32:12 by grenaud-          #+#    #+#             */
/*   Updated: 2021/11/17 17:39:09 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp_next;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		tmp_next = (*lst)->next;
		free(*lst);
		*lst = tmp_next;
	}
}
