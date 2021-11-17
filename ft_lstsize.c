/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:22:02 by grenaud-          #+#    #+#             */
/*   Updated: 2021/11/17 16:33:18 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	size;
	t_list			*lst_tmp;

	lst_tmp = lst;
	size = 0;
	while (lst_tmp)
	{
		size++;
		lst_tmp = lst_tmp->next;
	}
	return (size);
}
