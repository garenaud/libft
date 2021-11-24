/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:13:24 by grenaud-          #+#    #+#             */
/*   Updated: 2021/10/28 16:17:12 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	unsigned char	*d1;
	unsigned char	*d2;

	d1 = (unsigned char *) ptr1;
	d2 = (unsigned char *) ptr2;
	if (!size)
		return (0);
	while (--size && *d1 == *d2)
	{
		d1++;
		d2++;
	}
	return ((int)(*d1 - *d2));
}
