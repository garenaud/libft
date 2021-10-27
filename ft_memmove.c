/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:47:25 by grenaud-          #+#    #+#             */
/*   Updated: 2021/10/26 20:16:56 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*cdest;
	unsigned char	*csrc;

	i = 0;
	cdest = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	if (dst < src)
	{
		while (i < len)
		{
			cdest[len - 1] = csrc[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	return (dst);
}

int main()
{
    char str1[] = "Geeks"; // Array of size 100
    char str2[] = "Quiz"; // Array of size 5
 
    puts("str1 before memmove ");
    puts(str1);
 
    /* Copies contents of str2 to sr1 */
    ft_memmove(str1, str2, sizeof(str2));
 
    puts("\nstr1 after memmove ");
    puts(str1);
 
    return 0;
}