/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:50:25 by grenaud-          #+#    #+#             */
/*   Updated: 2021/11/17 14:11:44 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_c(char str_check, char c)
{
	if (str_check == c)
		return (1);
	return (0);
}

static int	nb_blocks(char const *s, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (s)
	{
		if ((i == 0 && !check_c(s[0], c))
		|| (i > 0 && check_c(s[i - 1], c) && !check_c(s[i], c)))
			nb++;
		i++;
	}
	return (nb);
}

static int	*size_blocks(char const *s, char c)
{
	int	*tab;
	int	i;
	int	j;

	i = 0;
	j = 0;
	tab = malloc(sizeof(*tab) * (nb_blocks(s, c)));
	if (tab == NULL)
		return (NULL);
	while (i < nb_blocks(s, c))
		tab[i++] = 0;
	i = 0;
	while (s[i])
	{
		if (!check_c(s[i], c))
			tab[j]++;
		else if (i > 0 && !check_c(s[i - 1], c))
			j++;
		i++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		*tab;
	char	**dest;

	i = 0;
	j = 0;
	tab = size_blocks(s, c);
	dest = malloc(sizeof(dest) * (nb_blocks(s, c) + 1));
	if (s == NULL && tab == NULL && dest == NULL)
		return (NULL);
	while (j < nb_blocks(s, c))
	{
		k = 0;
		while (check_c(s[i], c))
			i++;
		dest[j] = malloc(sizeof(*dest) * (tab[j] + 1));
		if (dest[j] == NULL)
			return (NULL);
		while (k < tab[j])
			dest[j][k++] = s[i++];
		dest[j++][k] = '\0';
	}
	dest[j] = NULL;
	free(tab);
	return (dest);
}
