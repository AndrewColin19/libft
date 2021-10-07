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

int	ft_atoi(const char *pnbr)
{	
	int	neg;
	int	num;

	num = 0;
	neg = 1;
	while (ft_isspace(*pnbr))
		pnbr++;
	if (*pnbr == '-' || *pnbr == '+')
	{
		if (*pnbr == '-')
		{
			neg = -1;
		}
		pnbr++;
	}
	while (ft_isdigit(*pnbr))
	{
		num *= 10;
		num += *pnbr - '0';
		pnbr++;
	}
	return (num * neg);
}
