/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:39:09 by acolin            #+#    #+#             */
/*   Updated: 2021/10/07 15:39:09 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	pos;
	size_t	i;

	if (!*s2)
		return ((char *)s1);
	pos = 0;
	while (s1[pos] != '\0' && pos < len)
	{
		if (s1[pos] == s2[0])
		{
			i = 1;
			while (s2[i] != '\0' && (pos + i) < len
				&& s1[pos + i] == s2[i])
				i++;
			if (s2[i] == '\0')
				return ((char *)s1 + pos);
		}
		pos++;
	}
	return (0);
}
