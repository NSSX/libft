/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:50:45 by avella            #+#    #+#             */
/*   Updated: 2015/11/24 17:12:25 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *chaine;

	chaine = ft_memalloc(size);
	if (chaine)
	{
		ft_bzero(chaine, 0);
		return (chaine);
	}
	return (NULL);
}
