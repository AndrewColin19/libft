/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:41:37 by acolin            #+#    #+#             */
/*   Updated: 2021/10/07 11:41:37 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char *argv[])
{
	char	**tab;
	int		i;

	(void) argc;
	(void) argv;
	tab = ft_split("hellocworld", 'c');
	i = 0;
	while (tab[i] != 0)
	{
		ft_putstr_fd(tab[i], 1);
		i++;
	}
	return (1);
}
