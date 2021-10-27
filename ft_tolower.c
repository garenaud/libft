/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:22:08 by grenaud-          #+#    #+#             */
/*   Updated: 2021/10/27 15:26:23 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/* 
int	main()
{
	printf("\nA converted to lowercase: %c", tolower('A'));
	printf("\n@ converted to lowercase: %c", tolower('@'));
	printf("\n3 converted to lowercase: %c", tolower('3'));
	printf("\nA converted to lowercase ft: %c", ft_tolower('A'));
	printf("\n@ converted to lowercase ft: %c", ft_tolower('@'));
	printf("\n3 converted to lowercase ft: %c", ft_tolower('3'));
	return (0);
} */