/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:36:22 by grenaud-          #+#    #+#             */
/*   Updated: 2021/10/27 17:14:44 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
		if (*str++ == (char)c)
			return ((char *)str - 1);
	if (c == '\0')
		return ((char *)str);
	return (0);
}
/* 
int main() {
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = 'o';
	char *ret;

	ret = ft_strchr(str, ch);

	printf("String after |%c| is - |%s|\n", ch, ret);
	
	return(0);
} */