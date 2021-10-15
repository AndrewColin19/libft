/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:52:04 by acolin            #+#    #+#             */
/*   Updated: 2021/10/07 12:52:04 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * convertit le début de la chaîne pointée par nptr en entier de type int .
 *
 * \param	nptr	chaine à convertir
 * \return			Le résultat de la conversion.
 */
int	ft_atoi(const char *nptr)
{	
	int	neg;
	int	num;

	num = 0;
	neg = 1;
	while (*nptr == ' ' || *nptr == '\n'
		|| *nptr == '\t' || *nptr == '\r'
		|| *nptr == '\v' || *nptr == '\f')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
		{
			neg = -1;
		}
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		num *= 10;
		num += *nptr - '0';
		nptr++;
	}
	return (num * neg);
}
