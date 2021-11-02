/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:45:43 by grenaud-          #+#    #+#             */
/*   Updated: 2021/11/02 13:18:38 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*needle;

	ptr = (unsigned char *) str;
	needle = 0;
	while (str != 0)
	{
		if (*ptr != (unsigned char)c)
		{
			ptr++;
		}
		else
		{
			needle = ptr;
			break ;
		}
		n--;
	}
	return (needle);
}
/* example main from https://aticleworld.com/memchr-in-c_cpp/
int main()
{
    char s[] = "Aticleworld";
    
    //called own created memchr function
    char *ptr = memchr(s,'c',sizeof(s));
    if (ptr != 0)
    {
        printf ("'c' found at position %ld.\n", ptr-s+1);
        printf ("search character found:  %s\n", ptr);
    }
    else
    {
        printf ("search character not found\n");
    }
    return 0;
} */