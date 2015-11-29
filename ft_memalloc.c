/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:26:03 by avella            #+#    #+#             */
/*   Updated: 2015/11/24 16:49:46 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char *zone;

	zone = (unsigned char *)malloc(sizeof(size) * size);
	if (zone)
	{
		ft_bzero(zone, 0);
		return ((void *)zone);
	}
	else
		return (NULL);
}
