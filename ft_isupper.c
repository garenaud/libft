/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:19:49 by grenaud-          #+#    #+#             */
/*   Updated: 2021/10/26 11:35:13 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h" */
#include <stdio.h>

int	ft_isupper(int c)
{
	if (c > 'A' && c < 'Z')
		return (1);
	return (0);
}
/* 
int	main(void)
{
	char	c;

	c = 'C';
	printf("Return value when uppercase character %c is passed to ft_isupper(): %d", c, ft_isupper(c));

	c = '+';
	printf("\nReturn value when another character %c is passed to is ft_isupper(): %d", c, ft_isupper(c));

	c = 'c';
	printf("\nReturn value when another character %c is passed to is ft_isupper(): %d", c, ft_isupper(c));

	return 0;
} */