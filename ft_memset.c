/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:22:51 by avella            #+#    #+#             */
/*   Updated: 2015/11/24 15:23:10 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			index;
	unsigned char	*m;

	m = (unsigned char *)b;
	index = 0;
	while (index < len)
	{
		m[index] = (unsigned char)c;
		index++;
	}
	return (b);
}
