/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:49:48 by marvin            #+#    #+#             */
/*   Updated: 2021/11/09 14:49:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Function name	ft_substr

Prototype		char *ft_substr(char const *s, unsigned int start, size_t len);

Paramètres		#1. La chaine de laquelle extraire la nouvelle chaine
				#2. L’index de début de la nouvelle chaine dans la chaine ’s’.
				#3. La taille maximale de la nouvelle chaine.

Val de retour 	The nouvelle chaine de caractere. NULL si l’allocation échoue.

Description 	Alloue (avec malloc(3)) et retourne une chaine de caractères 
				issue de la chaine ’s’.
				Cette nouvelle chaine commence à l’index ’start’ et
				a pour taille maximale ’len’ 
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		str = (char *)malloc(0);
		return (str);
	}
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = 0;
	return (str);
	free(str);
}
