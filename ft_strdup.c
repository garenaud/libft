/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:48:48 by marvin            #+#    #+#             */
/*   Updated: 2021/11/05 11:48:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char    *ft_strdup(const char *s)
{
    char    *copy;
    size_t  i;
    
    if (!(copy = malloc(sizeof(char) * ft_strlen(s) + 1)))
        return (NULL);
    i = 0;
    while (s[i] != '\0')
    {
        copy[i] = s[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
} */