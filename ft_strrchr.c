/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:28:38 by grenaud-          #+#    #+#             */
/*   Updated: 2021/10/27 16:37:50 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = s;
	while (*s)
		s++;
	while (s >= str)
		if (*s-- == (char)c)
			return ((char *)s + 1);
	return (0);
}
/* 
int main() {
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = 'o';
	char *ret;

	ret = ft_strrchr(str, ch);

	printf("String after |%c| is - |%s|\n", ch, ret);
	
	return(0);
} */