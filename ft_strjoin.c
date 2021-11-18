/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:31:29 by marvin            #+#    #+#             */
/*   Updated: 2021/11/18 15:31:51 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	lnew;
	int		i;
	int		j;

	if (!s1)
		return (0);
	lnew = (ft_strlen(s1) + 1) + (ft_strlen(s2) + 1);
	new = (char *)malloc(sizeof(char) * (lnew));
	if (!new)
		return (NULL);
	i = 0;
	while (s1[i++])
		new[i] = s1[i];
	j = 0;
	while (s2[j])
		new[i++] = s2[j++];
	new[i] = '\0';
	return (new);
}
