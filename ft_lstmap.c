/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:58:24 by avella            #+#    #+#             */
/*   Updated: 2015/11/27 11:58:52 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_lst;
	t_list *apres;
	t_list *avant;

	new_lst = NULL;
	if (lst && (*f))
	{
		new_lst = (*f)(lst);
		avant = new_lst;
		lst = lst->next;
		while (lst)
		{
			apres = (*f)(lst);
			avant->next = apres;
			avant = apres;
			lst = lst->next;
		}
		avant->next = NULL;
	}
	return (new_lst);
}
