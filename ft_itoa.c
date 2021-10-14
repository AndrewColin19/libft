/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:34:18 by acolin            #+#    #+#             */
/*   Updated: 2021/10/14 14:34:18 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size_int(long n)
{
	int	i;

	i = 1;
	if (n < 0)
		i++;
	while ((n / 10) != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	ft_fill(int *i, char *s, long n)
{
	if (n >= 10)
	{
		ft_fill(i, s, n / 10);
		ft_fill(i, s, n % 10);
	}
	else
		s[(*i)++] = n + '0';
}

char	*ft_itoa(int n)
{
	int		i;
	long	nb;
	char	*s;

	nb = n;
	s = malloc(sizeof(char) * (ft_size_int(nb) + 1));
	if (!s)
		return (NULL);
	i = 0;
	if (nb < 0)
	{
		s[i++] = '-';
		nb *= -1;
	}
	ft_fill(&i, s, nb);
	s[i] = '\0';
	return (s);
}
