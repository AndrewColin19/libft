/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 01:07:29 by acolin            #+#    #+#             */
/*   Updated: 2021/10/15 01:07:29 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Itère sur la liste lst et applique la fonction f au 
 * contenu de chaque élément. Crée une nouvelle liste
 * résultant des applications successives de f. la
 * fonction del est la pour detruire le contenu d un
 * element si necessaire
 * 
 * \param	*lst	L’adresse du pointeur vers un élément.
 * \param	*f		L’adresse de la fonction à appliquer.
 * \param	*del	L’adresse de la fonction permettant de 
 * 					supprimer le contenu d’un élément.
 * \return			La nouvelle liste. NULL si l’allocation échoue.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	first = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			while (first)
			{
				new = first->next;
				(*del)(first->content);
				free(first);
				first = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
