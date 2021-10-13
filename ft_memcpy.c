/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 21:03:31 by acolin            #+#    #+#             */
/*   Updated: 2021/10/07 21:03:31 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*s;

	s = (char *)dest;
	while (n)
	{
		*(char *)s = *(char *)src;
		s++;
		src++;
		n--;
	}
	return (dest);
}
