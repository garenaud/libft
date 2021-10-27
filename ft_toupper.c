/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:01:15 by grenaud-          #+#    #+#             */
/*   Updated: 2021/10/27 14:21:18 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/* 
int	main()
{
	printf("\na converted to uppercase: %c", toupper('a'));
	printf("\n@ converted to uppercase: %c", toupper('@'));
	printf("\n3 converted to uppercase: %c", toupper('3'));
	printf("\na converted to uppercase ft: %c", ft_toupper('a'));
	printf("\n@ converted to uppercase ft: %c", ft_toupper('@'));
	printf("\n3 converted to uppercase ft: %c", ft_toupper('3'));
	return (0);
} */