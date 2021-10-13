/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:21:23 by acolin            #+#    #+#             */
/*   Updated: 2021/10/12 17:21:23 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	i = start;
	while (i < (start + len))
	{
		str[i - start] = s[i];
		i++;
	}
	str[i - start] = '\0';
	return (str);
}
