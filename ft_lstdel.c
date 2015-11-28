/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:15:08 by avella            #+#    #+#             */
/*   Updated: 2015/11/27 11:17:14 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *list;
	t_list *suivant;

	list = *alst;
	while (list)
	{
		suivant = list->next;
		del(list->content, list->content_size);
		free(list);
		list = suivant;
	}
	*alst = NULL;
}
