/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:34:03 by grenaud-          #+#    #+#             */
/*   Updated: 2021/11/24 12:29:08 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp_lst;

	if (!lst)
		return (NULL);
	tmp_lst = lst;
	while (tmp_lst->next)
		tmp_lst = tmp_lst->next;
	return (tmp_lst);
}
