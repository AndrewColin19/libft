/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:34:54 by acolin            #+#    #+#             */
/*   Updated: 2021/10/12 19:34:54 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_tab(char **tab, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)tab[j]);
	}
	free(tab);
	return (NULL);
}

static int	ft_nb_word(char const *s, char c)
{
	size_t	i;
	int		nb;
	int		test;

	i = 0;
	nb = 0;
	test = 1;
	while (s[i] != '\0')
	{
		if (s[i] != c && test)
		{
			test = 0;
			nb++;
		}
		if (s[i] == c)
			test = 1;
		i++;
	}
	return (nb);
}

static char	**ft_mal_tab(char **tab, char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			k++;
		if (s[i] == c || s[i + 1] == '\0')
		{
			if (k != 0)
			{
				tab[j] = malloc(sizeof(char) * k + 1);
				if (!tab[j])
					return (ft_free_tab(tab, j));
				j++;
				k = 0;
			}
		}
		i++;
	}
	return (tab);
}

static char	**ft_fill_tab(char **tab, char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	if (!tab)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
			tab[j][k++] = s[i];
		else if (s[i] == c && s[i + 1] != '\0' && k != 0)
		{
			tab[j++][k] = '\0';
			k = 0;
		}
		i++;
	}
	tab[j][k] = '\0';
	tab[j + 1] = 0;
	return (tab);
}

/**
 * Alloue (avec malloc(3)) et retourne un tableau
 * de chaines de caracteres obtenu en séparant ’s’ à
 * l’aide du caractère ’c’, utilisé comme délimiteur.
 * Le tableau doit être terminé par NULL.
 *
 * \param	*s	La chaine de caractères à découper.
 * \param	c	Le caractère délimitant.
 * \return		Le tableau de nouvelles chaines de caractères,
 * 				résultant du découpage. NULL si l’allocation
 * 				échoue.
 */
char	**ft_split(char const *s, char c)
{
	int		nb_word;
	char	**tab;

	nb_word = ft_nb_word(s, c);
	if (!nb_word)
		return (NULL);
	tab = malloc(sizeof(char *) * nb_word + 1);
	if (!tab)
		return (NULL);
	return (ft_fill_tab(ft_mal_tab(tab, s, c), s, c));
}
