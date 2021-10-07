/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:25:54 by acolin            #+#    #+#             */
/*   Updated: 2021/10/07 14:25:54 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*sa;
	char	*sb;
	size_t	i;

	if (n == 0)
		return (0);
	sa = (char *) s1;
	sb = (char *) s2;
	i = 0;
	while (sa[i] == sb[i] && sa[i] != '\0' && sb[i] != '\0' && i < n - 1)
		i++;
	return (sa[i] - sb[i]);
}
